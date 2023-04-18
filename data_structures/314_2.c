#include <stdio.h>
#include <string.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

void init_movie(Movie *p2Movie) {
	strcpy(p2Movie->title, "");
	p2Movie->release = 0;
	p2Movie->viewers = 0;
}

void main() {
	Movie m = { "명량", 2014, 1761 };
	Movie* p2m = &m;

	init_movie(p2m);	//init_movie(&m);
	printf("m 초기화 후: 제목 = %s, 개봉연도 = %d, 관객 수 = %d\n", m.title, m.release, m.viewers);
}