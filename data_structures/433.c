int count_nodes_C(Node* head) {
	int count = 0;
	Node* ptr = head;

	if (head) {	// ��������Ͱ� NULL�� �ƴ� ���, �� ��尡 1�� �̻�
		do {
			count++;
			ptr = ptr->link;
		} while (ptr != head);	// ���� ���� ���ƿ��� �ݺ��� ����
	}
	
	return count;
}