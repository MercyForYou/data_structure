#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;	// char�� �����͸� ����Ű�� ������ ���� pc ����
	int* pi;	// int�� �����͸� ����Ű�� ������ ���� pi ����
	float* pf;	// float�� �����͸� ����Ű�� ������ ���� pf ����
	double* pd;	// double�� �����͸� ����Ű�� ������ ���� pd ����

	pc = (char*)malloc(100 * sizeof(char));	// malloc �Լ��� �̿��� 100 ����Ʈ ���� �޸� �Ҵ�
	pi = (int*)malloc(100 * sizeof(int));	// malloc �Լ��� �̿��� 400 ����Ʈ ���� �޸� �Ҵ�
	pf = (float*)malloc(100 * sizeof(float));	// malloc �Լ��� �̿��� 400 ����Ʈ ���� �޸� �Ҵ�
	pd = (double*)malloc(100 * sizeof(double));	// malloc �Լ��� �̿��� 800 ����Ʈ ���� �޸� �Ҵ�
	
	// ���� �޸� ���� �ǽ� �ڵ带 �����ÿ�.
	for (int i = 0; i < 100; i++) {
		pc[i] = i;
		printf("%d ", pc[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {
		pi[i] = i;
		printf("%d ", pi[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {
		pf[i] = i;
		printf("%.1f ", pf[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {
		pd[i] = i;
		printf("%.1lf ", pd[i]);
	}
	printf("\n\n");

	free(pc);
	free(pi);
	free(pf);
	free(pd);
}

// ���� �迭 �̿�