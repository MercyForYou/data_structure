#include <stdio.h>
// swap1, swap2 �Լ��� ����
void swap1(int i, int j);
void swap2(int* i, int* j);

void main() {
	int num1, num2;

	num1 = 100;
	num2 = 200;
	// ���� num1, num2 ���� �� �־��� ������ �ʱ�ȭ
	swap1(num1, num2);	// ���� ���� ȣ��� swap1 �Լ��� �Ű������� ����
	printf("num1 : %d num2 : %d\n", num1, num2);	//swap1 �Լ� ȣ�� �� num1, num2 ���
	swap2(&num1, &num2);	// ������ ���� ȣ��� swap2 �Լ��� �Ű������� ����
	printf("num1 : %d num2 : %d\n", num1, num2);	// swap2 �Լ� ȣ�� �� num1, num2 ���
}
void swap1(int i, int j) {	// �Ű������� ���� ����
	int temp;
	// temp�� �̿��� i�� j�� �ٲ�
	temp = i;
	i = j;
	j = temp;
}
void swap2(int* i, int* j) {	// �Ű������� �ּҸ� ����
	int temp;
	// temp�� �̿��� i�� j�� �ٲ�
	temp = *i;
	*i = *j;
	*j = temp;
}