Node* create_node(DataType data) {	// ��� ������ ��ȯ
	Node* new = (Node*)malloc(sizeof(Node));
	
	if (!new) {
		printf("��� ������ �����߽��ϴ�.");
		exit(1);
	}

	new->data = data;
	new->link = NULL;
	return new;
}
