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
	// 반복문을 이용해서 할당 받은 모든 메모리에 값을 넣음
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

	// free 함수를 이용한 동적 메모리 반납
	free(pc);
	free(pi);
	free(pf);
	free(pd);
}
// 포인터에서 덧셈, 뺄셈은 두 포인터 사이의 상대적 거리를 나타낸다.
// char형은 1바이트이므로 pc+1, pc-1을 하면 1만큼 차이가 난다.
// int형은 4바이트이므로 pi+1, pi-1을 하면 4만큼 차이가 난다.
// float형도 4바이트이므로 pf+1, pf-1을 하면 4만큼 차이가 난다.
// double형은 8바이트이므로 pd+1, pd-1을 하면 8만큼 차이가 난다.