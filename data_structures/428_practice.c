// �ܼ� ���Ḯ��Ʈ�� ����

Node* concatenate_lists(Node* head1, Node* head2) {
	Node* last;

	if (head1 == NULL)		// ù ��° ����Ʈ�� ����
		return head2;
	else if (head2 == NULL)	// �� ��° ����Ʈ�� ����
		return head1;
	else {					// �� ����Ʈ ��� ��� ����
		last = head1;
		
		while (last->link) {
			last = last->link;
		}
		// while�� for������ �ٲٸ�
		// for (last = head1; last->link; last = last->link)
		last->link = head2;
		return head1;
	}
}