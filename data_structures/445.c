#define DataType int
typedef struct Node_D {
	struct Node_D* llink;
	DataType data;
	struct Node_D* rlink;
} Node_D;

Node_D* delete_node_D(Node_D* head, Node_D* deleted) {
	if (delete == head) {
		printf("헤드 노드는 삭제가 안 됩니다.");
		return NULL;
	}
	else {
		deleted->rlink->llink = deleted->llink;
		deleted->llink->rlink = deleted->rlink;
		return deleted;
	}
}	// 포인터 2개
	// deleted 노드로 접근하기