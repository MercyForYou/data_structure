#include <stdio.h>

int main()
{	// 주어진 배열 선언 및 정의
	int day[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	// for 반복문을 사용하여 1-12월까지 출력
	for (i = 0; i < 12; i++)
	{
		printf("%d월은 %d일까지 있습니다.\n", (i + 1), day[i]);
	}
	// 0을 반환하며 종료
	return 0;
}