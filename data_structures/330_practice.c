#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// ��ȭ ������ �����ϴ� ����ü Movie ����
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

// ��ø ����ü Array