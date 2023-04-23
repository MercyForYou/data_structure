Node* create_node(DataType data) {	// 노드 포인터 반환
	Node* new = (Node*)malloc(sizeof(Node));
	
	if (!new) {
		printf("노드 생성에 실패했습니다.");
		exit(1);
	}

	new->data = data;
	new->link = NULL;
	return new;
}
