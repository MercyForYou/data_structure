#define DataType int
typedef struct Node_D {
	struct Node_D* llink;
	DataType data;
	struct Node_D* rlink;
} Node_D;

Node_D* delete_node_D(Node_D* head, Node_D* deleted) {
	if (delete == head) {
		printf("��� ���� ������ �� �˴ϴ�.");
		return NULL;
	}
	else {
		deleted->rlink->llink = deleted->llink;
		deleted->llink->rlink = deleted->rlink;
		return deleted;
	}
}	// ������ 2��
	// deleted ���� �����ϱ�