// ����ü �������� ���
#include <stdio.h>
#include <string.h>

// ����ü ����
typedef struct Movie{
	char title[50];
	int release;
	int viewers;
} Movie;

// ����ü ��� �ʱ�ȭ �Լ�
void init_movie(Movie *p2m) {
	strcpy(p2m->title, "");
	p2m->release = 0;
	p2m->viewers = 0;
}

void main() {
	Movie m = { "��", 2014, 1761 };
	Movie* p2m = &m;
	init_movie(p2m);	// init_movie(&m);
	printf("m �ʱ�ȭ ��: ����=%s, ��������=%d, ������=%d",
		m.title, m.release, m.viewers);
}