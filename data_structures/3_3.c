#include <stdio.h>

void main() {
	char* pc;	// ������ ���� pc�� char Ÿ�� �����͸� ����Ŵ
	int* pi;	// ������ ���� pi�� int Ÿ�� �����͸� ����Ŵ
	float* pf;	// ������ ���� pf�� float Ÿ�� �����͸� ����Ŵ
	double* pd;	// ������ ���� pd�� double Ÿ�� �����͸� ����Ŵ

	char c;		// ������ ���� c�� char Ÿ�� �����͸� ������
	int i;		// ������ ���� i�� int Ÿ�� �����͸� ������
	float f;	// �Ǽ��� ���� f�� float Ÿ�� �����͸� ������
	double d;	// �Ǽ��� ���� d�� double Ÿ�� �����͸� ������

	pc = NULL;	// pc�� NULL �����ͷ� ����
	printf("pc = %lu\n", pc); // ������ ���� pc�� �����
	*pc = 100;	// ������ pc�� ����Ű�� ���� 100�� ������
}