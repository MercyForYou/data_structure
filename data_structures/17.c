#include <stdio.h>
#include <stdlib.h>
#define DataType Student

// �л� ������ �����ϴ� ����ü Student ����
typedef struct Student {
	char name[4];	// �л� �̸��� �����ϴ� �迭 name ����
} Student;

// ����Ʈ ��� ����
typedef struct Node {
	DataType data;	// ������ �ʵ�
	struct Node* llink;	// ���� ���Ḯ��Ʈ�̹Ƿ� llink�� rlink ����
	struct Node* rlink;
} Node;

// ��� ��� ����
typedef struct LinkedST {
	int length;	// ����� �л��� ��
	Node* head;	// ù ��° ��带 ����Ű�� ������
} LinkedST;

// ����Ʈ ��� ����
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));	// Node��ŭ�� ���� �޸� �Ҵ�
	if (!new) {	// �޸� �Ҵ翡 ����
		printf("��� ������ �����߽��ϴ�.");
		exit(1);
	}
	new->data = data;	// �����Ͱ� ����Ű�� data�� data�� ����
	new->llink = new->rlink = NULL;	// llink�� rlink�� �ƹ��͵� ����Ű�� �ʰ� ��
	return new;	// ������ ����
}

// �л� ��� ��� �ʱ�ȭ
void init_list(LinkedST* ST) {
	DataType dummy = { "" };
	ST->head = create_node(dummy);	// ���� ��带 ������ ��� ���� ���������ν� ���� ���� ������
	ST->head->llink = ST->head->rlink = ST->head;	// ��� ���� ����
	ST->length = 0;	// ���̵� 0���� �ʱ�ȭ
}

// �л� ������ ���
void print_list(LinkedST* ST) {
	Node* ptr = ST->head->rlink;	// ���� ����� ���� ������ ����ϱ� ����
	for (int i = 1; i <= ST->length; i++) {
		printf("%s", ptr->data.name);	// �л��� �̸� ���
		ptr = ptr->rlink;	// ��带 �������� ���� ����
	}
}

// ��� new�� ���� ���� ���Ḯ��Ʈ�� �������� ����
void insert_node_last(LinkedST *ST, Node* new) {
	ST->length++;
	// ��� ��带 �Ű������� ����ؼ� length�� ó��
	// 4�� ����
	new->llink = ST->head->llink;
	new->rlink = ST->head;
	new->llink->rlink = new;
	new->rlink->llink = new;
}
// ���� ���� ���Ḯ��Ʈ���� ��� ����
Node* delete_node(LinkedST *ST, Node* deleted) {
	if (deleted == ST->head) {	// ���� ��带 �����Ϸ� �� ��� NULL ����
		printf("���� ���� ������ �� �˴ϴ�.");
		return NULL;
	}
	else {	
		ST->length--;
		// 2�� ����
		deleted->llink->rlink = deleted->rlink;
		deleted->rlink->llink = deleted->llink;
		return deleted;
	}
}

void main() {
	int n, delete_order;
	LinkedST students;	// ��� ��� students ����
	
	Student student1 = { "����" };	// �л� ���� �Է�
	Student student2 = { "����" };
	Student student3 = { "����" };
	Student student4 = { "����" };
	Student student5 = { "����" };

	printf("�л� ���� �Է��Ͻÿ�: ");	// �л� ���� ������ ������ �Է� ����
	scanf("%d", &n);
	printf("������ ������ �Է��Ͻÿ�: ");
	scanf("%d", &delete_order);
	
	// ����Ʈ �ʱ�ȭ
	init_list(&students);

	// �л� ����
	insert_node_last(&students, create_node(student1));
	insert_node_last(&students, create_node(student2));
	insert_node_last(&students, create_node(student3));
	insert_node_last(&students, create_node(student4));
	insert_node_last(&students, create_node(student5));

	// �л� �����ϴ� �κ��� �ϼ� ���߽��ϴ�.
	printf("���ŵ� ���: %s\n", delete_node());
	printf("���� ���: ");
}