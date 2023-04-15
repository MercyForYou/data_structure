#include <stdio.h>
// swap1, swap2 함수를 선언
void swap1(int i, int j);
void swap2(int* i, int* j);

void main() {
	int num1, num2;

	num1 = 100;
	num2 = 200;
	// 변수 num1, num2 선언 후 주어진 값으로 초기화
	swap1(num1, num2);	// 값에 의한 호출로 swap1 함수에 매개변수를 전달
	printf("num1 : %d num2 : %d\n", num1, num2);	//swap1 함수 호출 후 num1, num2 출력
	swap2(&num1, &num2);	// 참조에 의한 호출로 swap2 함수에 매개변수를 전달
	printf("num1 : %d num2 : %d\n", num1, num2);	// swap2 함수 호출 후 num1, num2 출력
}
void swap1(int i, int j) {	// 매개변수로 값을 받음
	int temp;
	// temp를 이용해 i와 j를 바꿈
	temp = i;
	i = j;
	j = temp;
}
void swap2(int* i, int* j) {	// 매개변수로 주소를 받음
	int temp;
	// temp를 이용해 i와 j를 바꿈
	temp = *i;
	*i = *j;
	*j = temp;
}