#include <stdio.h>
#include <string.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

void main() {
	Movie m1 = { "��", 2014, 1761 };
	Movie m2 = m1;

	if (!strcmp(m1.title, m2.title) && (m1.release == m2.release) && (m1.viewers == m2.viewers))
		printf("���� ��ȭ�Դϴ�.");
	/* ���� ������ ������ ����
	 if (m1 = m2)
		printf("���� ��ȭ�Դϴ�."); */
}