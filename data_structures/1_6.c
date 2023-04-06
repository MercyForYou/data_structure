#include <stdio.h>

void printArrayAddress(int [][3]);
// 2차원 배열을 매개변수로 사용하여 배열의 주소를 구하는 함수 선언
void main()
{	// 행이 2, 열이 3인 2차원 배열 array를 주어진 값으로 초기화
	int array[2][3] = { {1, 2, 3}, {4, 5, 6} };

	printf("배열 array의 출력 : \n");
	printArrayAddress(array);
}
void printArrayAddress(int a[][3])
{	// 2차원 배열 array의 주소를 구하는 함수
	int i, j;
	// 반복문을 통해 배열 array의 원소의 주소를 구함
	for (i = 0; i <= 1; i++)
	{// 행이 2개이므로 2번 반복함
		for (j = 0; j <= 2; j++)	// 열이 3개이므로 3번 반복함
			printf("%p ", &a[i][j]);
		printf("\n");
	}
}