#include <stdio.h>

void main(void) {
	char str[] = "What is Pointer?";
	// char 배열 str에 "What is Pointer"을 저장
	char* p;	// 포인터 변수 p는 char 타입 데이터를 가리킴
	int i;

	p = str;	// 포인터 p가 배열의 첫번째 원소의 주소를 가리키게 함
	// 널 문자가 발견될 때까지 반복문을 돌림
	for (i = 0; p[i] != NULL; i++)
		printf("%c", p[i]);	// 포인터를 배열처럼 사용함
}