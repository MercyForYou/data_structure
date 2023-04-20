#include <stdio.h>
#include <stdlib.h>
#define DataType int	// typedef int DataType;

// 단순 연결리스트 노드 구조 정의
typedef struct Node {
	DataType data;
	struct Node* link;
} Node;

int main() {
	Node *head, *temp;

	head = (Node*)malloc(sizeof(Node));		// 헤드 포인터에 메모리 할당
	if (!head)	// 헤드 포인터가 NULL이라면 (널포인터)
		exit(1);

	head->data = 10;
	head->link = NULL;

	temp = (Node*)malloc(sizeof(Node));		// 다음 포인터에 메모리 할당
	if (!temp)	// temp 포인터가 NULL이라면 (널포인터)
		exit(1);

	temp->data = 20;
	temp->link = NULL;
	head->link = temp;	// 헤드 포인터가 다음 포인터인 temp를 가리키도록 노드의 링크를 연결해줌

	printf("head-->%d-->%d\n", head->data, head->link->data);
	free(temp);
	free(head);
}