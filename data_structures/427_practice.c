// �ܼ� ���Ḯ��Ʈ������ ��� ����

Node* delete_node(Node** p2head, Node* before, Node* deleted) {
	if (*p2head != NULL) {
		if (before == NULL)	// ù ��� ����
			*p2head = (*p2head)->link;
		else				// �߰� ��� ����
			before->link = deleted->link;
		return deleted;
	}
	else {
		printf("�� ���Ḯ��Ʈ�Դϴ�.\n");
		return NULL;
	}
}