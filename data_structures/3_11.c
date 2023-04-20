#include <stdlib.h>

void main() {
	int i;
	char* pc;	// 포인터 변수 pc는 char형 데이터를 가리킴
	pc = (char*)malloc(100);	// malloc 함수를 이용해 100 바이트의 동적 메모리 할당을 받음

	for (i = 0; i < 100; i++)	// for문을 이용해 100번 돌림
		*pc = 100;	// 포인터 pc가 가리키는 곳에 값으로 100을 저장함

	free(pc);	// free 함수를 이용한 동적 메모리 반납
}
// 제대로 동작되지 않음 
// 동적 배열 이용해야 함