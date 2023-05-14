// 구조체 포인터의 사용
#include <stdio.h>
#include <string.h>

// 구조체 정의
typedef struct Movie{
	char title[50];
	int release;
	int viewers;
} Movie;

// 구조체 멤버 초기화 함수
void init_movie(Movie *p2m) {
	strcpy(p2m->title, "");
	p2m->release = 0;
	p2m->viewers = 0;
}

void main() {
	Movie m = { "명량", 2014, 1761 };
	Movie* p2m = &m;
	init_movie(p2m);	// init_movie(&m);
	printf("m 초기화 후: 제목=%s, 개봉연도=%d, 관객수=%d",
		m.title, m.release, m.viewers);
}