#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// 영화 정보를 저장하는 구조체 Movie 정의
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

// 중첩 구조체 ArrayBO 정의
typedef struct ArrayBO {
	int length;
	Movie movies[MAX_SIZE];	// 영화 정보를 저장하는 구조체 배열
} ArrayBO;

// 구조체 배열 뒤에 영화를 추가하는 함수
void add_movie(ArrayBO *BO, Movie m) {
	if (BO->length == MAX_SIZE) {
		printf("영화를 더 이상 추가할 수 없습니다.\n");
		exit(1);
	}
	BO->movies[BO->length] = m;	// 마지막 원소 다음에 추가
	BO->length++;
}

// 두 박스오피스를 하나로 함치는 함수
ArrayBO merge_BO(ArrayBO *a, ArrayBO *b) {
	ArrayBO c;
	int idx_a = 0, idx_b = 0;

	c.length = 0;
	
	while (idx_a < a->length && idx_b < b->length) {
		if (a->movies[idx_a].viewers >= b->movies[idx_b].viewers) {
			// a 관객수 >= b 관객수인 경우
			add_movie(&c, a->movies[idx_a]);
			idx_a++;
		}
		else {	// a 관객수 < b 관객수인 경우
			add_movie(&c, b->movies[idx_b]);
			idx_b++;
		}
	}
	// 아직 남아있는 a 영화들을 추가
	for (; idx_a < a->length; idx_a++)
		add_movie(&c, a->movies[idx_a]);
	
	// 아직 남아있는 b 영화들을 추가
	for (; idx_b < b->length; idx_b++)
		add_movie(&c, b->movies[idx_b]);
	
	return c;
}

int main() {
	ArrayBO domestic = { 4, { {"명량", 2014, 1761}, {"베테랑", 2015, 1341}, {"도둑들", 2012, 1298}, {"암살", 2015, 1270} } };
	ArrayBO foreign = { 3, { {"아바타", 2009, 1333}, {"인터스텔라", 2014, 1030}, {"겨울왕국", 2014, 1029} } };

	ArrayBO merged = merge_BO(&domestic, &foreign);

	for (int i = 0; i < merged.length; i++)
		printf("제목 = %s, 관객수 = %d\n", merged.movies[i].title, merged.movies[i].viewers);
}