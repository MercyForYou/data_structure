#include <stdio.h>

// void_pass_2d_array(int list[2][4])�� ����
// void_pass_2d_array(int (*list)[4])�� ����?
 void pass_2d_array(int list[][4]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++)
			list[i][j]++;
	}
}

int main() {
	int arr[2][4] = { {0, 1, 2, 3}, {4 , 5, 6, 7} };
	pass_2d_array(arr);		// arr(2, 4)�� ����

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++)
			printf("arr[%d] = %d\n", i, arr[i][j]);
	}
}