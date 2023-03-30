#include <stdio.h>
#include <stdlib.h> // rand 함수가 있는 헤더파일
#include <time.h>	// rand 함수를 초기화 하기 위한 헤더파일

int main()
{	// 크기가 10인 1차원 배열 a
	int a[10] = { 0 };
	int i, max, min;
	// rand 함수의 값 초기화
	srand(time(NULL));
	// 반복문에 rand 함수를 사용하여 배열 a에 임의의 값 넣음
	for (i = 0; i < 10; i++)
	{	
		a[i] = rand();
	}
	// 최대값과 최소값에 입력 받은 값을 하나 넣어줌
	min = a[0];
	max = a[0];
	// 입력 받은 값을 비교하여 최대값과 최소값을 구함
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("최대값: %d\n최소값: %d", max, min);
}