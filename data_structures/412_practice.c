// 동적 메모리 할당 p.96
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 영화 정보를 저장하는 구조체 Movie 정의
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	// 동적 메모리 할당
	int* p2i = (int*)malloc(sizeof(int));
	Movie* p2m = (Movie*)malloc(sizeof(Movie));

	if (p2i == NULL) {
		printf("정수 메모리 할당 실패\n");
		exit(1);
	}
	else {
		*p2i = 10;
		printf("메모리 할당 후: %d\n", *p2i);
		free(p2i);
	}

	if (p2m == NULL) {
		printf("구조체 메모리 할당 실패\n");
		exit(1);
	}
	else {
		strcpy(p2m->title, "명량");
		p2m->release = 2014;
		p2m->viewers = 1761;
		printf("메모리 할당 후: 제목=%s, 개봉연도=%d, 관객수=%d", p2m->title, p2m->release, p2m->viewers);
	}
}