#include <stdio.h>
#define MAX_SIZE 100

// ����ü ����
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	Movie m1 = { "��", 2014, 1761 };
	Movie m2 = { "�Ű��Բ�-�˿͹�", 2017, 1441 };
	Movie m3 = { "���׶�", 2015, 1341 };
	Movie* ptrs2movie[MAX_SIZE] = {&m1, &m2, &m3};	// ������ �迭

	for (int i = 0; i < 3; i++)
		printf("����=%s, ��������=%d, ������=%d\n",
			ptrs2movie[i]->title, ptrs2movie[i]->release, ptrs2movie[i]->viewers);
}