// 단순 연결리스트의 길이 계산

int count_nodes(Node* head) {
	int count = 0;
	Node* ptr = head;

	while (ptr) {
		count++;
		ptr = ptr->link;
	}

	return count++;
}