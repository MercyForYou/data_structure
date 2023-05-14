// 단순 연결리스트에서의 노드 삭제

Node* delete_node(Node** p2head, Node* before, Node* deleted) {
	if (*p2head != NULL) {
		if (before == NULL)	// 첫 노드 삭제
			*p2head = (*p2head)->link;
		else				// 중간 노드 삭제
			before->link = deleted->link;
		return deleted;
	}
	else {
		printf("빈 연결리스트입니다.\n");
		return NULL;
	}
}