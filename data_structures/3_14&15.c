#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;
	int* pi;
	float* pf;
	double* pd;

	pc = (char*)malloc(100 * sizeof(char));
	pi = (int*)malloc(100 * sizeof(int));
	pf = (float*)malloc(100 * sizeof(float));
	pd = (double*)malloc(100 * sizeof(double));

	// ���� �޸� ���� �ǽ� �ڵ带 �����ÿ�.
	// �ݺ����� �̿��ؼ� �Ҵ� ���� ��� �޸𸮿� ���� ����
	for (int i = 0; i < 100; i++) {
		pc[i] = i;
	}
	for (int i = 0; i < 100; i++) {
		pi[i] = i;
	}
	for (int i = 0; i < 100; i++) {
		pf[i] = i;
	}
	for (int i = 0; i < 100; i++) {
		pd[i] = i;
	}

	printf("pc   = %lu\n", pc);
	printf("pc+1 = %lu\n", pc + 1);
	printf("pc-1 = %lu\n\n", pc - 1);
	
	printf("pi   = %lu\n", pi);
	printf("pi+1 = %lu\n", pi + 1);
	printf("pi-1 = %lu\n\n", pi - 1);

	printf("pf   = %lu\n", pf);
	printf("pf+1 = %lu\n", pf + 1);
	printf("pf-1 = %lu\n\n", pf - 1);

	printf("pd   = %lu\n", pd);
	printf("pd+1 = %lu\n", pd + 1);
	printf("pd-1 = %lu\n", pd - 1);

	// free �Լ��� �̿��� ���� �޸� �ݳ�
	free(pc);
	free(pi);
	free(pf);
	free(pd);
}
// �����Ϳ��� ����, ������ �� ������ ������ ����� �Ÿ��� ��Ÿ����.
// char���� 1����Ʈ�̹Ƿ� pc+1, pc-1�� �ϸ� 1��ŭ ���̰� ����.
// int���� 4����Ʈ�̹Ƿ� pi+1, pi-1�� �ϸ� 4��ŭ ���̰� ����.
// float���� 4����Ʈ�̹Ƿ� pf+1, pf-1�� �ϸ� 4��ŭ ���̰� ����.
// double���� 8����Ʈ�̹Ƿ� pd+1, pd-1�� �ϸ� 8��ŭ ���̰� ����.