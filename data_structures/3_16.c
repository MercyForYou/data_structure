#include <stdio.h>
#include <stdlib.h>

typedef struct test {	// 구조체 test_str 정의
	int data;	// 데이터 필드
	struct test *link;	// 링크 필드
} test_str;

void main() {
	int i;
	test_str* ptest;	// test_str형 데이터를 가리키는 포인터 변수 ptest 선언
	test_str* ptest2;	// test_str형 데이터를 가리키는 포인터 변수 ptest2 선언

	ptest = (double*)malloc(sizeof(test_str));		// malloc 함수를 이용한 동적 메모리 할당
	ptest2 = (test_str*)malloc(sizeof(test_str));	// 구조체 test_str만큼의 메모리 크기를 할당함

	// 동적 메모리 공간 실습 코드를 넣으시오.
	if (!ptest || !ptest2)	// 두 포인터 중 하나라도 메모리 할당이 안되면 종료함
		exit(1);

	ptest->data = 10;	// ptest가 가리키는 데이터 필드에 10을 저장
	ptest->link = ptest2;	// ptest가 가리키는 링크가 ptest2를 가리키게 함

	ptest2->data = 20;	// ptest2가 가리키는 데이터 필드에 20을 저장
	ptest2->link = NULL;	// ptest2가 가리키는 링크에 NULL을 주어 아무것도 가리키지 않게 함

	printf("%d %d", ptest->data, ptest->link->data);	// 구조체 메모리 할당을 확인하기 위한 출력

	free(ptest);	// free 함수를 이용한 메모리 반납
}