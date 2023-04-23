int count_nodes_C(Node* head) {
	int count = 0;
	Node* ptr = head;

	if (head) {	// 헤드포인터가 NULL이 아닐 경우, 즉 노드가 1개 이상
		do {
			count++;
			ptr = ptr->link;
		} while (ptr != head);	// 시작 노드로 돌아오면 반복을 종료
	}
	
	return count;
}