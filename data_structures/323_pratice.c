#include <stdio.h>

int main() {
	int i, j;
	int arr1[4] = { 0, 1 ,2 ,3 };
	int arr[2][4] = { {0, 1, 2, 3}, {4, 5, 6, 7} };
	int* p2i = arr1;
	int(*p2arr1)[4] = &arr1;	//(*p2arr1)[4] = arr1; 과 같음?
	int(*p2arr2)[4] = &arr2;	//(*p2arr2)[4] = arr2; 와 같음?

	for (i = 0; i < 4; )
}