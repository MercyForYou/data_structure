void insert_node(Node** p2head, Node* before, Node* new) {
	if (*p2head == NULL) {	// �� ���Ḯ��Ʈ�� ����
		new->link = NULL;
		*p2head = new;
	}

	else if (before == NULL) {	// �� �տ� ����
		new->link = *p2head;	// *p2head�� ���� ù ���
		*p2head = new;	// *p2head�� �� ���� �ٲ�
	}

	/*	1���� 2���� �� ���� ǥ���� �� ����
	*	if (*p2head == NULL || before == NULL) {
	*		new->link = *p2head;
	*		*p2head = new;
	*	}
	*/

	else {	// �߰��� ����
		new->link = before->link;
		before->link = new;
	}
}

int main() {
	Node* head, * before, * new;

	insert_node(&head, before, new);
}