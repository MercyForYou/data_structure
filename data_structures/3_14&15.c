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
	// 반복문을 이용해서 할당 받은 모든 메모리에 값을 넣음
	for (int i = 0; i < 100; i++) {
		pc[i] = i;	// 포인터 변수 pc의 이름을 이용해 배열처럼 사용함
	}
	for (int i = 0; i < 100; i++) {	// 위와 동일
		pi[i] = i;
	}
	for (int i = 0; i < 100; i++) {	// 위와 동일
		pf[i] = i;
	}
	for (int i = 0; i < 100; i++) {	// 위와 동일
		pd[i] = i;
	}

	printf("pc   = %lu\n", pc);			// pc가 가리키는 메모리의 주소 출력
	printf("pc+1 = %lu\n", pc + 1);		// pc가 가리키는 메모리의 다음 메모리 주소를 출력 (1바이트)
	printf("pc-1 = %lu\n\n", pc - 1);	// pc가 가리키는 메모리의 이전 메모리 주소를 출력 (1바이트)
	
	printf("pi   = %lu\n", pi);			// 위와 동일
	printf("pi+1 = %lu\n", pi + 1);		// (4바이트)
	printf("pi-1 = %lu\n\n", pi - 1);

	printf("pf   = %lu\n", pf);			// 위와 동일
	printf("pf+1 = %lu\n", pf + 1);		// (4바이트)
	printf("pf-1 = %lu\n\n", pf - 1);

	printf("pd   = %lu\n", pd);			// 위와 동일
	printf("pd+1 = %lu\n", pd + 1);		// (8바이트)
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