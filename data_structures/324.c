#include <stdio.h>
#define MAX_SIZE 100

// 구조체 정의
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	Movie movies[MAX_SIZE] = {
		{"명량", 2014, 1761}, {"신과함께-죄와벌", 2017, 1441}, {"베테랑", 2015, 1341}
	};

	for (int i = 0; i < 3; i++)
		printf("제목=%s, 개봉연도=%d, 관객수=%d\n",
			movies[i].title, movies[i].release, movies[i].viewers);
}