Node* search_node(Node* from, DataType data) {
	Node* ptr = from;

	while (ptr) {
		if (ptr->data == data)
			break;
		ptr = ptr->link;
	}
	return ptr;
}