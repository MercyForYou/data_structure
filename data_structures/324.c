#include <stdio.h>
#define MAX_SIZE 100

// ����ü ����
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	Movie movies[MAX_SIZE] = {
		{"��", 2014, 1761}, {"�Ű��Բ�-�˿͹�", 2017, 1441}, {"���׶�", 2015, 1341}
	};

	for (int i = 0; i < 3; i++)
		printf("����=%s, ��������=%d, ������=%d\n",
			movies[i].title, movies[i].release, movies[i].viewers);
}