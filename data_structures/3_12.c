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
	for (int i = 0; i < 100; i++) {	// 반복문을 통해 할당받은 메모리에 값을 넣어줌
		pc[i] = i;	// 포인터 변수 pc의 이름을 이용해 배열처럼 사용함
		printf("%d ", pc[i]);	// 결과를 확인하기 위해 출력함
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {	// 위와 동일
		pi[i] = i;
		printf("%d ", pi[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {	// 위와 동일
		pf[i] = i;
		printf("%.1f ", pf[i]);
	}
	printf("\n\n");

	for (int i = 0; i < 100; i++) {	// 위와 동일
		pd[i] = i;
		printf("%.1lf ", pd[i]);
	}
	printf("\n\n");

	free(pc);
	free(pi);
	free(pf);
	free(pd);
}// free 함수를 이용한 동적 메모리 반납

// 동적 배열 이용