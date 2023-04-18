#include <stdio.h>
#include <string.h>

typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

void main() {
	Movie m1 = { "명량", 2014, 1761 };
	Movie m2 = m1;

	if (!strcmp(m1.title, m2.title) && (m1.release == m2.release) && (m1.viewers == m2.viewers))
		printf("같은 영화입니다.");
	/* 다음 문장은 컴파일 에러
	 if (m1 = m2)
		printf("같은 영화입니다."); */
}