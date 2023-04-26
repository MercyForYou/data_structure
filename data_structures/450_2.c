#include <stdio.h>
#include <stdlib.h>
#define DataType Movie

// 영화 정보를 저장하는 구조체 Movie 정의
typedef struct Movie {
	char title[50];	// 영화 제목
	int release;	// 개봉연도
	int viewers;	// 누적관객수
} Movie;

// 리스트 노드 정의
typedef struct Node {
	DataType data;
	struct Node* link;
} Node;

// 헤드 노드 정의
typedef struct LinkdedBO {
	int length;	// 저장된 영화의 수
	Node* head;	// 첫 번째 노드를 가리키는 포인터
	Node* tail;	// 마지막 노드를 가리키는 포인터
} LinkedBO;

// 연결리스트 초기화
void init_list(LinkedBO* BO) {
	BO->length = 0;
	BO->head = BO->tail = NULL;
}

// 리스트 항목들을 출력
void print_list(LinkedBO* BO) {
	Node* ptr = BO->head;
	for (int i = 1; i <= BO->length; i++) {
		printf("제목=%s, 개봉연도=%d, 관객수=%d\n",
			ptr->data.title, ptr->data.release, ptr->data.viewers);
		ptr = ptr->link;
	}
}

// 단순 연결리스트의 마지막에 삽입
void insert_node_last(LinkedBO* BO, Node* new) {
	BO->length++;	// 헤드 노드 때문에
	if (BO->tail == NULL) {	// 빈 단순 연결리스트에 삽입 
		BO->head = BO->tail = new;
	}
	else {	// 맨 마지막에 삽입
		BO->tail->link = new;
		BO->tail = new;
	}
}

// 단순 연결리스트의 노드 생성(프로그램 4.4 p.104)
Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));
	if (!new) {
		printf("노드 생성에 실패하였습니다.");
		exit(1);
	}
	new->data = data;
	new->link = NULL;
	return new;
}

// 두 박스오피스 a와 b를 하나로 합치는 함수
LinkedBO merge_BO(LinkedBO* a, LinkedBO* b) {
	LinkedBO c;	// 합병된 박스오피스
	Node* p2a = a->head, * p2b = b->head;	// 노드 포인터 : 헤드가 변경될까봐

	init_list(&c);	// 합병된 박스오피스 c를 초기화
	
	while (p2a && p2b) {	// NULL이 아니므로 비교할 영화가 있음
		if (p2a->data.viewers >= p2b->data.viewers) {
			// a 관객수 >= b 관객수인 경우
			insert_node_last(&c, create_node(p2a->data));	// 423.c에 있음
			p2a = p2a->link;
		}
		else {	// a 관객수 < b 관객수인 경우
			insert_node_last(&c, create_node(p2b->data));
			p2b = p2b->link;
		}
	}

	// 아직 남아있는 a 영화들을 추가
	while (p2a) {	// p2a가 NULL이 아니면 실행
		insert_node_last(&c, create_node(p2a->data));
		p2a = p2a->link;
	}
	// 아직 남아있는 b 영화들을 추가
	while (p2b) {
		insert_node_last(&c, create_node(p2b->data));
		p2b = p2b->link;
	}
	return c;
}

int main() {
	LinkedBO domestic, foreign;
	Movie m1 = { "명량", 2014, 1761 };
	Movie m2 = { "베테랑", 2015, 1341 };
	Movie m3 = { "도둑들", 2012, 1298 };
	Movie m4 = { "암살", 2015, 1270 };
	Movie m5 = { "아바타", 2009, 1333 };
	Movie m6 = { "인터스텔라", 2014, 1030 };
	Movie m7 = { "겨울왕국", 2014, 1029 };

	// 연결리스트 초기화
	init_list(&domestic);
	init_list(&foreign);
	// 국내영화 박스오피스 생성
	insert_node_last(&domestic, create_node(m1));
	insert_node_last(&domestic, create_node(m2));
	insert_node_last(&domestic, create_node(m3));
	insert_node_last(&domestic, create_node(m4));
	// 외국영화 박스오피스 생성
	insert_node_last(&foreign, create_node(m5));
	insert_node_last(&foreign, create_node(m6));
	insert_node_last(&foreign, create_node(m7));
	// 합병
	LinkedBO merged = merge_BO(&domestic, &foreign);
	print_list(&merged);
}