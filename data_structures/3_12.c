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

	free(pc);
	free(pi);
	free(pf);
	free(pd);
}

// ���� �迭 �̿�