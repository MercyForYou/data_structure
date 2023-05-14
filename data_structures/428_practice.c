// 단순 연결리스트의 결합

Node* concatenate_lists(Node* head1, Node* head2) {
	Node* last;

	if (head1 == NULL)		// 첫 번째 리스트가 공백
		return head2;
	else if (head2 == NULL)	// 두 번째 리스트가 공백
		return head1;
	else {					// 두 리스트 모두 노드 포함
		last = head1;
		
		while (last->link) {
			last = last->link;
		}
		// while문 for문으로 바꾸면
		// for (last = head1; last->link; last = last->link)
		last->link = head2;
		return head1;
	}
}