#include <stdio.h>
#define LIST_SIZE 10	// �迭�� ũ�� 10����

int list[LIST_SIZE] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
// ũ�Ⱑ 10�� 1���� �迭 list�� �־��� ������ �ʱ�ȭ
int main()
{
	int i;
	// �ݺ����� �̿��Ͽ� �迭 list�� ������ �ּҸ� ���
	for (i = 0; i < LIST_SIZE; i++)
	{
		printf("list[%d]�� �ּ� = %p\n", i, &list[i]);
	}
}