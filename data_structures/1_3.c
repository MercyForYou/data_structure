#include <stdio.h>
#include <stdlib.h> // rand �Լ��� �ִ� �������
#include <time.h>	// rand �Լ��� �ʱ�ȭ �ϱ� ���� �������

int main()
{	// ũ�Ⱑ 10�� 1���� �迭 a
	int a[10] = { 0 };
	int i, max, min;
	// rand �Լ��� �� �ʱ�ȭ
	srand(time(NULL));
	// �ݺ����� rand �Լ��� ����Ͽ� �迭 a�� ������ �� ����
	for (i = 0; i < 10; i++)
	{	
		a[i] = rand();
	}
	// �ִ밪�� �ּҰ��� �Է� ���� ���� �ϳ� �־���
	min = a[0];
	max = a[0];
	// �Է� ���� ���� ���Ͽ� �ִ밪�� �ּҰ��� ����
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	printf("�ִ밪: %d\n�ּҰ�: %d", max, min);
}