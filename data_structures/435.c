void insert_last_C(Node** p2head, Node* new) {
	if (*p2head == NULL) {	// 빈 원형 연결리스트에 삽입
		*p2head = new;
		new->link = new;
	}

	else {	// 맨 마지막에 삽입
		new->link = (*p2head)->link;
		(*p2head)->link = new;
		*p2head = new;	// 삽입된 노드가 마지막이 되도록 헤드 포인터만 변경, insert_first_C에 여기만 추가
	}
}