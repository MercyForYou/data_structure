#include <stdio.h>
#include <string.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

void main() {
	// Movie m1, m2, m3;
	
	/* strcpy(m1.title, "��");
	m1.release = 2014;
	m1.viewers = 1761; */

	Movie m1 = { "��", 2014, 0 };
	Movie m2 = { "��", 2014 };
	Movie m3 = { .release = 2014, .title = "��" };

	printf("%s %s %s %d %d %d %d %d %d",m1.title, m2.title, m3.title , m1.release, m2.release, m3.release, m1.viewers, m2.viewers, m3.viewers);
}