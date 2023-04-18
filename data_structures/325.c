#include <stdio.h>

void increase_arr(int list[], int n) {
	for (int i = 0; i < n; i++)
		list[i]++;
}

void increase_part_of_arr(int* list, int from, int to) {
	for (int i = from; i < to; i++)
		(*(list + i))++;
}

int main() {
	int arr[] = { 0, 1, 2, 3 };
	
	increase_arr(arr, 4);
	for (int i = 0; i < 4; i++)
		printf("arr[%d] = %d ", i, arr[i]);
	printf("\n");

	increase_part_of_arr(arr, 1, 3);
	for (int i = 0; i < 4; i++)
		printf("arr[%d] = %d ", i, arr[i]);
}