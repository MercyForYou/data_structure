#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

// ��ȭ ������ �����ϴ� ����ü Movie ����
typedef struct Movie {
	char title[50];
	int release;
	int viewers;
} Movie;

// ��ø ����ü ArrayBO ����
typedef struct ArrayBO {
	int length;
	Movie movies[MAX_SIZE];	// ��ȭ ������ �����ϴ� ����ü �迭
} ArrayBO;

// ����ü �迭 �ڿ� ��ȭ�� �߰��ϴ� �Լ�
void add_movie(ArrayBO *BO, Movie m) {
	if (BO->length == MAX_SIZE) {
		printf("��ȭ�� �� �̻� �߰��� �� �����ϴ�.\n");
		exit(1);
	}
	BO->movies[BO->length] = m;	// ������ ���� ������ �߰�
	BO->length++;
}

// �� �ڽ����ǽ��� �ϳ��� ��ġ�� �Լ�
ArrayBO merge_BO(ArrayBO *a, ArrayBO *b) {
	ArrayBO c;
	int idx_a = 0, idx_b = 0;

	c.length = 0;
	
	while (idx_a < a->length && idx_b < b->length) {
		if (a->movies[idx_a].viewers >= b->movies[idx_b].viewers) {
			// a ������ >= b �������� ���
			add_movie(&c, a->movies[idx_a]);
			idx_a++;
		}
		else {	// a ������ < b �������� ���
			add_movie(&c, b->movies[idx_b]);
			idx_b++;
		}
	}
	// ���� �����ִ� a ��ȭ���� �߰�
	for (; idx_a < a->length; idx_a++)
		add_movie(&c, a->movies[idx_a]);
	
	// ���� �����ִ� b ��ȭ���� �߰�
	for (; idx_b < b->length; idx_b++)
		add_movie(&c, b->movies[idx_b]);
	
	return c;
}

int main() {
	ArrayBO domestic = { 4, { {"��", 2014, 1761}, {"���׶�", 2015, 1341}, {"���ϵ�", 2012, 1298}, {"�ϻ�", 2015, 1270} } };
	ArrayBO foreign = { 3, { {"�ƹ�Ÿ", 2009, 1333}, {"���ͽ��ڶ�", 2014, 1030}, {"�ܿ�ձ�", 2014, 1029} } };

	ArrayBO merged = merge_BO(&domestic, &foreign);

	for (int i = 0; i < merged.length; i++)
		printf("���� = %s, ������ = %d\n", merged.movies[i].title, merged.movies[i].viewers);
}