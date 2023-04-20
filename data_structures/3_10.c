#include <stdio.h>
#include <memory.h>

void main() {
	char* pc;

	pc = (char*)malloc(1);
	*pc = 100;
	printf("c = %d\n", *pc);
	free(pc);
}