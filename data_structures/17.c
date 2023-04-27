#include <stdio.h>
#include <stdlib.h>
#define DataType Student

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
void print_list(LinkedST* ST) {
	Node* ptr = ST->head->rlink;
	for (int i = 1; i <= ST->length; i++) {
		printf("%s", ptr->data.name);
		ptr = ptr->rlink;
	}
}

// ���� ���Ḯ��Ʈ�� �������� ����
void insert_node_last(LinkedST *ST, Node* new) {
	ST->length++;
	new->llink = ST->head->llink;
	new->rlink = ST->head;
	new->llink->rlink = new;
	new->rlink->llink = new;
}
// ���� ���Ḯ��Ʈ���� ��� ����
Node* delete_node(LinkedST *ST, Node* deleted) {
	if (deleted == ST->head) {
		printf("���� ���� ������ �� �˴ϴ�.");
		return NULL;
	}
	else {
		ST->length--;
		deleted->llink->rlink = deleted->rlink;
		deleted->rlink->llink = deleted->llink;
		return deleted;
	}
}

void main() {
	int n, delete_order;
	LinkedST students;

	Student student1 = { "����" };
	Student student2 = { "����" };
	Student student3 = { "����" };
	Student student4 = { "����" };
	Student student5 = { "����" };

	printf("�л� ���� �Է��Ͻÿ�: ");
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


		printf("���ŵ� ���: %s\n", delete_node(student1));
		printf("���� ���: ");
	

	// ���
	printf("�л�: ");
	print_list(&students);
}