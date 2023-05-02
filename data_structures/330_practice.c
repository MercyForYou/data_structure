#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// 영화 정보를 저장하는 구조체 Movie 정의
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

// 중첩 구조체 Array