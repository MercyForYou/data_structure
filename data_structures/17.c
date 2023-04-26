#include <stdio.h>
#include <stdlib.h>
#define DataType int

// �л� ������ �����ϴ� ����ü Student ����
typedef struct Student {
	char name[4];
} Student;

// ����Ʈ ��� ����
typedef struct Node {
	DataType data;
	struct Node* llink;
	struct Node* rlink;
} Node;

// ��� ��� ����
typedef struct LinkedST {
	int length;	// ����� �л��� ��
	Node* head;	// ù ��° ��带 ����Ű�� ������
} LinkedST;

// ����Ʈ ��� ����
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));
	if (!new) {
		printf("��� ������ �����߽��ϴ�.");
		exit(1);
	}
	new->data = data;
	new->llink = new->rlink = NULL;
	return new;
}

// �л� �ʱ�ȭ
void init_list(LinkedST* ST) {
	DataType dummy = { "" };
	ST->head = create_node(dummy);
	ST->head->llink = ST->head->rlink = ST->head;
	ST->length = 0;
}

// �л� ���



// ���� ���Ḯ��Ʈ�� �������� ����
void insert_node(Node* before, Node* new) {
	new->llink = before;
	new->rlink = before->rlink;
	before->rlink = new;
	new->rlink->llink = new;
}
// ���� ���Ḯ��Ʈ���� ��� ����
Node* delete_node(Node* head, Node* deleted) {
	if (deleted == head) {
		printf("��� ���� ������ �� �˴ϴ�.");
		return NULL;
	}
	else {
		deleted->llink->rlink = deleted->rlink;
		deleted->rlink->llink = deleted->llink;
		return deleted;
	}
}

void main() {
	int n;
	LinkedST students;

	Student student1 = { "����" };
	Student student2 = { "����" };
	Student student3 = { "����" };
	Student student4 = { "����" };
	Student student5 = { "����" };

	scanf("%d", &n);
	
	// ����Ʈ �ʱ�ȭ
	init_list(&students);

	// �л� ����
	insert_node_last(&students, create_node(student1));
	insert_node_last(&students, create_node(student2));
	insert_node_last(&students, create_node(student3));
	insert_node_last(&students, create_node(student4));
	insert_node_last(&students, create_node(student5));
}