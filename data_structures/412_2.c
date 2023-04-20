#include <stdio.h>
#include <stdlib.h>

int main() {
	int row, col;
	int* arr1 = NULL, **arr2 = NULL;	// 1차원 배열과 2차원 배열에 대한 포인터

	printf("1차원 배열의 크기: ");
	scanf("%d", &col);
	
	arr1 = (int*)malloc(sizeof(int) * col);	// 1차원 배열 동적 메모리 할당

	for (int i = 0; i < col; i++) {
		arr1[i] = i;
		printf("arr1[%d] = %d ", i, arr1[i]);
	}
	printf("\n");
	
	free(arr1);		// 메모리 반납

	printf("2차원 배열의 크기: ");
	scanf("%d %d", &row, &col);

	// 2차원 배열 메모리 할당 1단계: 행을 동적 할당 (이중 포인터)
	arr2 = (int**)malloc(sizeof(int*) * row);

	// 2차원 배열 메모리 할당 2단계 : 각 행에 대해 열을 동적 할당
	for (int i = 0; i < row; i++) {
		arr2[i] = (int*)malloc(sizeof(int) * col);
		for (int j = 0; j < col; j++) {
			arr2[i][j] = col * i + j;
			printf("arr2[%d][%d]= %d ", i, j, arr2[i][j]);
		}
		printf("\n");
	}

	// 2차원 배열 메모리 반납: 메모리 할당의 역순
	for (int i = 0; i < row; i++)
		free(arr2[i]);
	free(arr2);
}