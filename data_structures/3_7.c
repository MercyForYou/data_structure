#include <stdio.h>

void main(void) {
	char str[] = "What is Pointer?";
	// char �迭 str�� "What is Pointer"�� ����
	char* p;	// ������ ���� p�� char Ÿ�� �����͸� ����Ŵ
	int i;

	p = str;	// ������ p�� �迭�� ù��° ������ �ּҸ� ����Ű�� ��
	// �� ���ڰ� �߰ߵ� ������ �ݺ����� ����
	for (i = 0; p[i] != NULL; i++)
		printf("%c", p[i]);	// �����͸� �迭ó�� �����
}