#include <stdio.h>
#include <stdlib.h>

int main() {
	int row, col;
	int* arr1 = NULL, **arr2 = NULL;	// 1���� �迭�� 2���� �迭�� ���� ������

	printf("1���� �迭�� ũ��: ");
	scanf("%d", &col);
	
	arr1 = (int*)malloc(sizeof(int) * col);	// 1���� �迭 ���� �޸� �Ҵ�

	for (int i = 0; i < col; i++) {
		arr1[i] = i;
		printf("arr1[%d] = %d ", i, arr1[i]);
	}
	printf("\n");
	
	free(arr1);		// �޸� �ݳ�

	printf("2���� �迭�� ũ��: ");
	scanf("%d %d", &row, &col);

	// 2���� �迭 �޸� �Ҵ� 1�ܰ�: ���� ���� �Ҵ� (���� ������)
	arr2 = (int**)malloc(sizeof(int*) * row);

	// 2���� �迭 �޸� �Ҵ� 2�ܰ� : �� �࿡ ���� ���� ���� �Ҵ�
	for (int i = 0; i < row; i++) {
		arr2[i] = (int*)malloc(sizeof(int) * col);
		for (int j = 0; j < col; j++) {
			arr2[i][j] = col * i + j;
			printf("arr2[%d][%d]= %d ", i, j, arr2[i][j]);
		}
		printf("\n");
	}

	// 2���� �迭 �޸� �ݳ�: �޸� �Ҵ��� ����
	for (int i = 0; i < row; i++)
		free(arr2[i]);
	free(arr2);
}