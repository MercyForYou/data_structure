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
	
	// 동적 메모리 공간 실습 코드를 넣으시오.

	free(pc);
	free(pi);
	free(pf);
	free(pd);
}

// 동적 배열 이용