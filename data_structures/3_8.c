#include <stdio.h>
// char 타입의 포인터 배열을 선언하고 주어진 값으로 초기화
char* pa[] = {
	"에러 1",
	"에러 2",
	"에러 3",
	"에러 4",
	"에러 5",
	"에러 6"
};
// 포인터가 가리키는 것을 출력하는 error 함수
void error(int err_num) {
	printf(pa[err_num]);	// 포인터 배열 pa[err_num]를 출력
}

main() {
	error(1);	// error 함수에 1을 줌
}