#include <stdio.h>
#include <stdlib.h>

typedef struct test {	// ����ü ����
	int data;
	struct test *link;
} test_str;

void main() {
	int i;
	test_str* ptest;
	test_str* ptest2;

	ptest = (double*)malloc(sizeof(test_str));	// malloc �Լ��� �̿��� ���� �޸� �Ҵ�
	ptest2 = (test_str*)malloc(sizeof(test_str));

	// ���� �޸� ���� �ǽ� �ڵ带 �����ÿ�.
	if (!ptest || !ptest2)
		exit(1);

	ptest->data = 10;
	ptest->link = ptest2;

	ptest2->data = 20;
	ptest2->link = NULL;

	printf("%d %d", ptest->data, ptest->link->data);

	free(ptest);
}
// ����ü ptest�� Ÿ���� �� test_str�� �ƴ϶� double?