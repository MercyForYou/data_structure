// �ܼ� ���Ḯ��Ʈ�� Ž��

Node* search_node(Node* from, Datatype data) {
	Node* ptr = from;

	if (!ptr)
		exit(1);
	while (ptr) {
		if (ptr->data == data)
			break;
		ptr = ptr->link;
	}
	return ptr;
}