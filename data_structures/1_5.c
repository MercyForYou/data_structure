#include <stdio.h>
#define LIST_SIZE 10	// 배열의 크기 10으로

int list[LIST_SIZE] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
// 크기가 10인 1차원 배열 list를 주어진 값으로 초기화
int main()
{
	int i;
	// 반복문을 이용하여 배열 list의 원소의 주소를 출력
	for (i = 0; i < LIST_SIZE; i++)
	{
		printf("list[%d]의 주소 = %p\n", i, &list[i]);
	}
}