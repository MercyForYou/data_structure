#include <stdio.h>
#include <stdlib.h>

typedef struct test {	// ����ü test_str ����
	int data;	// ������ �ʵ�
	struct test *link;	// ��ũ �ʵ�
} test_str;

void main() {
	int i;
	test_str* ptest;	// test_str�� �����͸� ����Ű�� ������ ���� ptest ����
	test_str* ptest2;	// test_str�� �����͸� ����Ű�� ������ ���� ptest2 ����

	ptest = (double*)malloc(sizeof(test_str));		// malloc �Լ��� �̿��� ���� �޸� �Ҵ�
	ptest2 = (test_str*)malloc(sizeof(test_str));	// ����ü test_str��ŭ�� �޸� ũ�⸦ �Ҵ���

	// ���� �޸� ���� �ǽ� �ڵ带 �����ÿ�.
	if (!ptest || !ptest2)	// �� ������ �� �ϳ��� �޸� �Ҵ��� �ȵǸ� ������
		exit(1);

	ptest->data = 10;	// ptest�� ����Ű�� ������ �ʵ忡 10�� ����
	ptest->link = ptest2;	// ptest�� ����Ű�� ��ũ�� ptest2�� ����Ű�� ��

	ptest2->data = 20;	// ptest2�� ����Ű�� ������ �ʵ忡 20�� ����
	ptest2->link = NULL;	// ptest2�� ����Ű�� ��ũ�� NULL�� �־� �ƹ��͵� ����Ű�� �ʰ� ��

	printf("%d %d", ptest->data, ptest->link->data);	// ����ü �޸� �Ҵ��� Ȯ���ϱ� ���� ���

	free(ptest);	// free �Լ��� �̿��� �޸� �ݳ�
}