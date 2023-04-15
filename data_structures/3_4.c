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

	printf("초기화하기 전의 pc = %lu\n", pc);	// 초기화하기 전에 pc를 출력
	pc = &c;	// 포인터 pc가 char 변수 c를 가리키도록 초기화
	printf("초기화하기 후의 pc = %lu\n", pc);	// 초기화한 후의 pc를 출력
	*pc = 100;	// 포인터 pc가 가리키는 곳에 100을 저장함
	printf("c = %d\n", c);	// char 변수 c 값을 출력
}