#include <stdio.h>
#include <stdlib.h>
#define DataType Student

// 학생 정보를 저장하는 구조체 Student 정의
typedef struct Student {
	char name[4];
} Student;

// 리스트 노드 정의
typedef struct Node {
	DataType data;
	struct Node* llink;
	struct Node* rlink;
} Node;

// 헤드 노드 정의
typedef struct LinkedST {
	int length;	// 저장된 학생의 수
	Node* head;	// 첫 번째 노드를 가리키는 포인터
} LinkedST;

// 리스트 노드 생성
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));
	if (!new) {
		printf("노드 생성에 실패했습니다.");
		exit(1);
	}
	new->data = data;
	new->llink = new->rlink = NULL;
	return new;
}

// 학생 초기화
void init_list(LinkedST* ST) {
	DataType dummy = { "" };
	ST->head = create_node(dummy);
	ST->head->llink = ST->head->rlink = ST->head;
	ST->length = 0;
}

// 학생 출력
void print_list(LinkedST* ST) {
	Node* ptr = ST->head->rlink;
	for (int i = 1; i <= ST->length; i++) {
		printf("%s", ptr->data.name);
		ptr = ptr->rlink;
	}
}

// 이중 연결리스트의 마지막에 삽입
void insert_node_last(LinkedST *ST, Node* new) {
	ST->length++;
	new->llink = ST->head->llink;
	new->rlink = ST->head;
	new->llink->rlink = new;
	new->rlink->llink = new;
}
// 이중 연결리스트에서 노드 삭제
Node* delete_node(LinkedST *ST, Node* deleted) {
	if (deleted == ST->head) {
		printf("더미 노드는 삭제가 안 됩니다.");
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

	Student student1 = { "은서" };
	Student student2 = { "도영" };
	Student student3 = { "재희" };
	Student student4 = { "민주" };
	Student student5 = { "지은" };

	printf("학생 수를 입력하시오: ");
	scanf("%d", &n);
	printf("삭제할 순서를 입력하시오: ");
	scanf("%d", &delete_order);
	
	// 리스트 초기화
	init_list(&students);

	// 학생 성성
	insert_node_last(&students, create_node(student1));
	insert_node_last(&students, create_node(student2));
	insert_node_last(&students, create_node(student3));
	insert_node_last(&students, create_node(student4));
	insert_node_last(&students, create_node(student5));


		printf("제거된 사람: %s\n", delete_node(student1));
		printf("남은 사람: ");
	

	// 출력
	printf("학생: ");
	print_list(&students);
}