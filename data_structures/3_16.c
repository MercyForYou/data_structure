#include <stdio.h>
#include <stdlib.h>

typedef struct test {	// 구조체 정의
	int data;
	struct test *link;
} test_str;	// 변수 선언

void main() {
	int i;
	test_str* ptest;
}