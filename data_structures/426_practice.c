// �ܼ� ���Ḯ��Ʈ������ ��� ����

void insert_node(Node** p2head, Node* before, Node* new) {
	if (*p2head == NULL) {	// �� ����Ʈ�� ����
		new->link = NULL;	// NULL ��� *p2head�� ���� (������ ��������Ͱ� NULL��)
		*p2head = new;
	}
	else if (before == NULL) {	// �� �տ� ����
		new->link = *p2head;
		*p2head = new;
	}
	else {	// �߰��� ����
		new->link = before->link;
		before->link = new;
	}
}

int main() {
	Node* head, * before, * new;

	insert_node(&head, before, new);
}