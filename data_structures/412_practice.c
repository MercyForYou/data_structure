// ���� �޸� �Ҵ� p.96
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ȭ ������ �����ϴ� ����ü Movie ����
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

int main() {
	// ���� �޸� �Ҵ�
	int* p2i = (int*)malloc(sizeof(int));
	Movie* p2m = (Movie*)malloc(sizeof(Movie));

	if (p2i == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	else {
		*p2i = 10;
		printf("�޸� �Ҵ� ��: %d\n", *p2i);
		free(p2i);
	}

	if (p2m == NULL) {
		printf("����ü �޸� �Ҵ� ����\n");
		exit(1);
	}
	else {
		strcpy(p2m->title, "��");
		p2m->release = 2014;
		p2m->viewers = 1761;
		printf("�޸� �Ҵ� ��: ����=%s, ��������=%d, ������=%d", p2m->title, p2m->release, p2m->viewers);
	}
}