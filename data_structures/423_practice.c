// 단순 연결리스트의 노드 생성

Node* create_node(DataType data) {
	Node* new = (Node*)malloc(sizeof(Node));

	if (!new)
		exit(1);
	new->data = data;
	new->link = NULL;
	
	return new;
}