#include <stdio.h>

void main() {
	char* pc;	// 포인터 변수 pc는 char 타입 데이터를 가리킴
	int* pi;	// 포인터 변수 pi는 int 타입 데이터를 가리킴
	float* pf;	// 포인터 변수 pf는 float 타입 데이터를 가리킴
	double* pd;	// 포인터 변수 pd는 double 타입 데이터를 가리킴

	char c;		// 문자형 변수 c는 char 타입 데이터를 저장함
	int i;		// 정수형 변수 i는 int 타입 데이터를 저장함
	float f;	// 실수형 변수 f는 float 타입 데이터를 저장함
	double d;	// 실수형 변수 d는 double 타입 데이터를 저장함

	pc = NULL;	// pc를 NULL 포인터로 만듦
	printf("pc = %lu\n", pc); // 포인터 변수 pc를 출력함
	*pc = 100;	// 포인터 pc가 가리키는 곳에 100을 저장함
}