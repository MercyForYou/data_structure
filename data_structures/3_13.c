#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;

	pc = (char*)malloc(sizeof(char));

	if (pc == NULL) {
		printf("메모리 할당 실패\n");
		exit(1);
	}
	*pc = 100;
	printf("%d\n", *pc);
}
// free 함수의 호출을 생략해도 컴파일에는 문제가 없다.
// 그러나 반납 없이 할당만 하면 메모리 누수로 메모리 공간이 부족해져 프로그램 동작이 중지될 수도 있다.