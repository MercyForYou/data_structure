#include <stdio.h>
#include <stdlib.h>
#define DataType Student

// 학생 정보를 저장하는 구조체 Student 정의
typedef struct Student {
	char name[4];	// 학생 이름을 저장하는 배열 name 선언
} Student;

// 리스트 노드 정의
typedef struct Node {
	DataType data;	// 데이터 필드
	struct Node* llink;	// 이중 연결리스트이므로 llink와 rlink 선언
	struct Node* rlink;
} Node;

// 헤드 노드 정의
typedef struct LinkedST {
	int length;	// 저장된 학생의 수
	Node* head;	// 첫 번째 노드를 가리키는 포인터
} LinkedST;

// 리스트 노드 생성
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));	// Node만큼의 동적 메모리 할당
	if (!new) {	// 메모리 할당에 실패
		printf("노드 생성에 실패했습니다.");
		exit(1);
	}
	new->data = data;	// 포인터가 가리키는 data에 data를 저장
	new->llink = new->rlink = NULL;	// llink와 rlink가 아무것도 가리키지 않게 함
	return new;	// 포인터 리턴
}

// 학생 헤드 노드 초기화
void init_list(LinkedST* ST) {
	DataType dummy = { "" };
	ST->head = create_node(dummy);	// 더미 노드를 생성해 헤드 노드와 연결함으로써 삽입 삭제 간단히
	ST->head->llink = ST->head->rlink = ST->head;	// 헤드 노드와 연결
	ST->length = 0;	// 길이도 0으로 초기화
}

// 학생 데이터 출력
void print_list(LinkedST* ST) {
	Node* ptr = ST->head->rlink;	// 더미 노드의 다음 노드부터 출력하기 위해
	for (int i = 1; i <= ST->length; i++) {
		printf("%s", ptr->data.name);	// 학생의 이름 출력
		ptr = ptr->rlink;	// 노드를 증가시켜 다음 노드로
	}
}

// 노드 new를 이중 원형 연결리스트의 마지막에 삽입
void insert_node_last(LinkedST *ST, Node* new) {
	ST->length++;
	// 헤드 노드를 매개변수로 사용해서 length도 처리
	// 4개 연결
	new->llink = ST->head->llink;
	new->rlink = ST->head;
	new->llink->rlink = new;
	new->rlink->llink = new;
}
// 이중 원형 연결리스트에서 노드 삭제
Node* delete_node(LinkedST *ST, Node* deleted) {
	if (deleted == ST->head) {	// 더미 노드를 삭제하려 할 경우 NULL 리턴
		printf("더미 노드는 삭제가 안 됩니다.");
		return NULL;
	}
	else {	
		ST->length--;
		// 2개 연결
		deleted->llink->rlink = deleted->rlink;
		deleted->rlink->llink = deleted->llink;
		return deleted;
	}
}

void main() {
	int n, delete_order;
	LinkedST students;	// 헤드 노드 students 선언
	
	Student student1 = { "은서" };	// 학생 정보 입력
	Student student2 = { "도영" };
	Student student3 = { "재희" };
	Student student4 = { "민주" };
	Student student5 = { "지은" };

	printf("학생 수를 입력하시오: ");	// 학생 수와 삭제할 순서를 입력 받음
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

	// 학생 제거하는 부분을 완성 못했습니다.
	printf("제거된 사람: %s\n", delete_node());
	printf("남은 사람: ");
}