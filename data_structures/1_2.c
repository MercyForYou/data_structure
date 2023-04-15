#include <stdio.h>
#define SIZE 10
// 배열의 크기가 10으로 동일하니 수정에 용이하도록 매크로 상수로 선언
void matrix_diff(int* a, int* b, int* c);
int main()
{	//크기가 10인 1차원 배열 a와 b를 임의의 값으로 초기화
	int a[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int b[SIZE] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	// 배열 a와 b의 차를 저장할 배열 c를 0으로 초기화
	int c[SIZE] = { 0 };
	int i;
	// 모든 값을 전달하고 받아오기 위해 배열을 매개값으로 사용함
	// 배열 이름은 주소 상수라는 점을 이용하였음
	matrix_diff(a, b, c);	// matrix_diff 함수 호출
	// 올바르게 연산과 저장이 됐는지 결과를 확인해보기 위한 출력
	for (i = 0; i < SIZE; i++)
	{
		printf("c[%d] : %d\n", i, c[i]);
	}
	return 0;
}
void matrix_diff(int* a, int* b, int* c) // 주소 값을 받기 위해 매개 변수로 포인터를 사용
{	// 배열 a와 배열 b의 뺄셈 연산을 SIZE(10)번 반복 실행
	int i;
	for (i = 0; i < SIZE; i++)
	{// 결과를 배열 c에 넣음
		c[i] = a[i] - b[i];
	}
}