#include <stdio.h>
// 크기가 10인 배열 a에 주어진 기본값 10개를 넣음
int a[10] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
int input[10];
// 크기가 10인 1차원 배열 input
void search(int input[], int* find, int* index);

int main()
{
	int i;
	int* find = NULL;
	int* index = NULL;
	// 반복문을 통해 배열 input을 입력한 값으로 초기화 
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input[i]);
	}
	scanf("%d", &find);

	search(input, &find, &index);

	if (index == NULL)
		printf("입력하신 값은 배열에 없습니다.");
	else
		printf("입력하신 값은 배열의 %d번 인덱스에 있습니다.", index);
}

void search(int input[], int* find, int* index)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (find == a[i])
		{
			index = i;
		}
	}
}