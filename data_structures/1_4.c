#include <stdio.h>
// ũ�Ⱑ 10�� �迭 a�� �־��� �⺻�� 10���� ����
int a[10] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
int input[10];
// ũ�Ⱑ 10�� 1���� �迭 input
void search(int input[], int* find, int* index);

int main()
{
	int i;
	int* find = NULL;
	int* index = NULL;
	// �ݺ����� ���� �迭 input�� �Է��� ������ �ʱ�ȭ 
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input[i]);
	}
	scanf("%d", &find);

	search(input, &find, &index);

	if (index == NULL)
		printf("�Է��Ͻ� ���� �迭�� �����ϴ�.");
	else
		printf("�Է��Ͻ� ���� �迭�� %d�� �ε����� �ֽ��ϴ�.", index);
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