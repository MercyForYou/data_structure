void insert_node(Node** p2head, Node* before, Node* new) {
	if (*p2head == NULL) {	// 빈 연결리스트에 삽입
		new->link = NULL;
		*p2head = new;
	}

	else if (before == NULL) {	// 맨 앞에 삽입
		new->link = *p2head;	// *p2head는 기존 첫 노드
		*p2head = new;	// *p2head를 새 노드로 바꿈
	}

	/*	1번과 2번을 한 번에 표현할 수 있음
	*	if (*p2head == NULL || before == NULL) {
	*		new->link = *p2head;
	*		*p2head = new;
	*	}
	*/

	else {	// 중간에 삽입
		new->link = before->link;
		before->link = new;
	}
}

int main() {
	Node* head, * before, * new;

	insert_node(&head, before, new);
}