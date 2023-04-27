#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;	// char형 데이터를 가리키는 포인터 변수 pc 선언

	pc = (char*)malloc(sizeof(char));	// malloc 함수를 이용해 1 바이트의 동적 메모리 할당받음

	if (pc == NULL) {	// 메모리 할당에 실패하면 종료함
		printf("메모리 할당 실패\n");
		exit(1);
	}
	*pc = 100;	// pc가 가리키는 메모리에 100을 저장함
	printf("%d\n", *pc);	// 100이 저장됐는지 확인하기 위해 출력
}
// free 함수의 호출을 생략해도 컴파일에는 문제가 없다.
// 그러나 반납 없이 할당만 하면 메모리 누수로 메모리 공간이 부족해져 프로그램 동작이 중지될 수도 있다.