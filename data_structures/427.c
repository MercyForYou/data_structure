#include <stdio.h>

Node* delete_node(Node** p2head, Node* before, Node* deleted) {
	if (*p2head != NULL) {
		if (before == NULL)
			*p2head = (*p2head)->link;	// 첫 노드 삭제
		else
			before->link = deleted->link;	// 중간 노드 삭제
		return deleted;
	 }
	else {
		printf("빈 연결리스트입니다.\n");
		return NULL;
	}
}