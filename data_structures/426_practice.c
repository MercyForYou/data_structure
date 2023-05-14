// 단순 연결리스트에서의 노드 삽입

void insert_node(Node** p2head, Node* before, Node* new) {
	if (*p2head == NULL) {	// 빈 리스트에 삽입
		new->link = NULL;	// NULL 대신 *p2head도 가능 (어차피 헤드포인터가 NULL임)
		*p2head = new;
	}
	else if (before == NULL) {	// 맨 앞에 삽입
		new->link = *p2head;
		*p2head = new;
	}
	else {	// 중간에 삽입
		new->link = before->link;
		before->link = new;
	}
}

int main() {
	Node* head, * before, * new;

	insert_node(&head, before, new);
}