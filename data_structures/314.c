#include <stdio.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

void main() {
	Movie m;
	Movie* p2m = &m;

	(*p2m).viewers = 10;
	printf("���� �� = %d ���� �� = %d\n", m.viewers, (*p2m).viewers);

	p2m->viewers = 20;
	printf("���� �� = %d ���� �� = %d\n", m.viewers, p2m->viewers);
}