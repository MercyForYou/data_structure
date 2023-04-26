#include <stdio.h>
#include <stdlib.h>
#define DataType Movie

// ��ȭ ������ �����ϴ� ����ü Movie ����
typedef struct Movie {
	char title[50];	// ��ȭ ����
	int release;	// ��������
	int viewers;	// ����������
} Movie;

// ����Ʈ ��� ����
typedef struct Node {
	DataType data;
	struct Node* link;
} Node;

// ��� ��� ����
typedef struct LinkdedBO {
	int length;	// ����� ��ȭ�� ��
	Node* head;	// ù ��° ��带 ����Ű�� ������
	Node* tail;	// ������ ��带 ����Ű�� ������
} LinkedBO;

// ���Ḯ��Ʈ �ʱ�ȭ
void init_list(LinkedBO* BO) {
	BO->length = 0;
	BO->head = BO->tail = NULL;
}

// ����Ʈ �׸���� ���
void print_list(LinkedBO* BO) {
	Node* ptr = BO->head;
	for (int i = 1; i <= BO->length; i++) {
		printf("����=%s, ��������=%d, ������=%d\n",
			ptr->data.title, ptr->data.release, ptr->data.viewers);
		ptr = ptr->link;
	}
}

// �ܼ� ���Ḯ��Ʈ�� �������� ����
void insert_node_last(LinkedBO* BO, Node* new) {
	BO->length++;	// ��� ��� ������
	if (BO->tail == NULL) {	// �� �ܼ� ���Ḯ��Ʈ�� ���� 
		BO->head = BO->tail = new;
	}
	else {	// �� �������� ����
		BO->tail->link = new;
		BO->tail = new;
	}
}

// �ܼ� ���Ḯ��Ʈ�� ��� ����(���α׷� 4.4 p.104)
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));
	if (!new) {
		printf("��� ������ �����Ͽ����ϴ�.");
		exit(1);
	}
	new->data = data;
	new->link = NULL;
	return new;
}

// �� �ڽ����ǽ� a�� b�� �ϳ��� ��ġ�� �Լ�
LinkedBO merge_BO(LinkedBO* a, LinkedBO* b) {
	LinkedBO c;	// �պ��� �ڽ����ǽ�
	Node* p2a = a->head, * p2b = b->head;	// ��� ������ : ��尡 ����ɱ��

	init_list(&c);	// �պ��� �ڽ����ǽ� c�� �ʱ�ȭ
	
	while (p2a && p2b) {	// NULL�� �ƴϹǷ� ���� ��ȭ�� ����
		if (p2a->data.viewers >= p2b->data.viewers) {
			// a ������ >= b �������� ���
			insert_node_last(&c, create_node(p2a->data));	// 423.c�� ����
			p2a = p2a->link;
		}
		else {	// a ������ < b �������� ���
			insert_node_last(&c, create_node(p2b->data));
			p2b = p2b->link;
		}
	}

	// ���� �����ִ� a ��ȭ���� �߰�
	while (p2a) {	// p2a�� NULL�� �ƴϸ� ����
		insert_node_last(&c, create_node(p2a->data));
		p2a = p2a->link;
	}
	// ���� �����ִ� b ��ȭ���� �߰�
	while (p2b) {
		insert_node_last(&c, create_node(p2b->data));
		p2b = p2b->link;
	}
	return c;
}

int main() {
	LinkedBO domestic, foreign;
	Movie m1 = { "��", 2014, 1761 };
	Movie m2 = { "���׶�", 2015, 1341 };
	Movie m3 = { "���ϵ�", 2012, 1298 };
	Movie m4 = { "�ϻ�", 2015, 1270 };
	Movie m5 = { "�ƹ�Ÿ", 2009, 1333 };
	Movie m6 = { "���ͽ��ڶ�", 2014, 1030 };
	Movie m7 = { "�ܿ�ձ�", 2014, 1029 };

	// ���Ḯ��Ʈ �ʱ�ȭ
	init_list(&domestic);
	init_list(&foreign);
	// ������ȭ �ڽ����ǽ� ����
	insert_node_last(&domestic, create_node(m1));
	insert_node_last(&domestic, create_node(m2));
	insert_node_last(&domestic, create_node(m3));
	insert_node_last(&domestic, create_node(m4));
	// �ܱ���ȭ �ڽ����ǽ� ����
	insert_node_last(&foreign, create_node(m5));
	insert_node_last(&foreign, create_node(m6));
	insert_node_last(&foreign, create_node(m7));
	// �պ�
	LinkedBO merged = merge_BO(&domestic, &foreign);
	print_list(&merged);
}