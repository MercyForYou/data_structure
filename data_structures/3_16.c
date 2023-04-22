#include <stdio.h>
#include <stdlib.h>

typedef struct test {	// 구조체 정의
	int data;
	struct test *link;
} test_str;

void main() {
	int i;
	test_str* ptest;
	test_str* ptest2;

	ptest = (double*)malloc(sizeof(test_str));	// malloc 함수를 이용한 동적 메모리 할당
	ptest2 = (test_str*)malloc(sizeof(test_str));

	// 동적 메모리 공간 실습 코드를 넣으시오.
	if (!ptest || !ptest2)
		exit(1);

	ptest->data = 10;
	ptest->link = ptest2;

	ptest2->data = 20;
	ptest2->link = NULL;

	printf("%d %d", ptest->data, ptest->link->data);

	free(ptest);
}
// 구조체 ptest의 타입이 왜 test_str이 아니라 double?