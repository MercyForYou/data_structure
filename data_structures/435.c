void insert_last_C(Node** p2head, Node* new) {
	if (*p2head == NULL) {	// �� ���� ���Ḯ��Ʈ�� ����
		*p2head = new;
		new->link = new;
	}

	else {	// �� �������� ����
		new->link = (*p2head)->link;
		(*p2head)->link = new;
		*p2head = new;	// ���Ե� ��尡 �������� �ǵ��� ��� �����͸� ����, insert_first_C�� ���⸸ �߰�
	}
}