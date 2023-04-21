#include <stdio.h>
#include <memory.h>	// 메모리 조작 함수를 쓰기 위한 헤더파일
#include <stdlib.h>	// 동적 메모리 할당 malloc 함수를 쓰기 위한 헤더파일

void main() {
	char* pc;	// 포인터 변수 pc는 char형 데이터를 가리킴

	pc = (char*)malloc(1);	// malloc 함수를 이용해 1바이트 크기의 동적 메모리 할당을 받음
	
	// 메모리 할당이 실패할 경우 널 포인터 반환 및 프로그램 종료
	if (pc == NULL) {
		printf("메모리 할당 실패\n");
		exit(1);
	}
	*pc = 100;	// 동적 메모리 할당 후 포인터 pc가 가리키는 메모리 공간에 100 저장
	printf("c = %d\n", *pc);	// pc가 가리키는 곳에 저장된 값을 확인하기 위해 출력
	
	free(pc);	// free 함수를 이용한 동적 메모리 반납
}