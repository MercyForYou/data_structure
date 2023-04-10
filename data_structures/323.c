#include <stdio.h>

int main() {
	int arr[4] = { 0, 1, 2, 3 };
	int* p2i = arr;

	for (int i = 0; i < 4; i++)
		printf("arr[%d] = %d, p2i[%d] = %d, *(arr + %d) = %d, *(p2i + %d) = %d\n",
			i, arr[i], i, p2i[i], i, *(arr + i), i, *(p2i + i));
}