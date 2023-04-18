#include <stdio.h>
#define MAX_SIZE 100

// 구조체 정의
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	Movie m1 = { "명량", 2014, 1761 };
	Movie m2 = { "신과함께-죄와벌", 2017, 1441 };
	Movie m3 = { "베테랑", 2015, 1341 };
	Movie* ptrs2movie[MAX_SIZE] = {&m1, &m2, &m3};	// 포인터 배열

	for (int i = 0; i < 3; i++)
		printf("제목=%s, 개봉연도=%d, 관객수=%d\n",
			ptrs2movie[i]->title, ptrs2movie[i]->release, ptrs2movie[i]->viewers);
}