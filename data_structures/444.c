#define DataType int
typedef struct Node_D {
	struct Node_D* llink;
	struct Node_D* rlink;
	DataType data;
} Node_D;

void insert_node_D(Node_D  *before, Node_D *new) {
	new->llink = before;
	new->rlink = before->rlink;
	before->rlink = new;
	new->rlink->llink = new;	// 4�� ������ �׸� �� �����ϱ�
}