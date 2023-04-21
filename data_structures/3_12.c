#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;	// char형 데이터를 가리키는 포인터 변수 pc 선언
	int* pi;	// int형 데이터를 가리키는 포인터 변수 pi 선언
	float* pf;	// float형 데이터를 가리키는 포인터 변수 pf 선언
	double* pd;	// double형 데이터를 가리키는 포인터 변수 pd 선언

	pc = (char*)malloc(100 * sizeof(char));	// malloc 함수를 이용해 100 바이트 동적 메모리 할당
	pi = (int*)malloc(100 * sizeof(int));	// malloc 함수를 이용해 400 바이트 동적 메모리 할당
	pf = (float*)malloc(100 * sizeof(float));	// malloc 함수를 이용해 400 바이트 동적 메모리 할당
	pd = (double*)malloc(100 * sizeof(double));	// malloc 함수를 이용해 800 바이트 동적 메모리 할당
	
	// 동적 메모리 공간 실습 코드를 넣으시오.
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

// 동적 배열 이용