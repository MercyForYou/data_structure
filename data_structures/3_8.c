#include <stdio.h>
// char Ÿ���� ������ �迭�� �����ϰ� �־��� ������ �ʱ�ȭ
char* pa[] = {
	"���� 1",
	"���� 2",
	"���� 3",
	"���� 4",
	"���� 5",
	"���� 6"
};
// �����Ͱ� ����Ű�� ���� ����ϴ� error �Լ�
void error(int err_num) {
	printf(pa[err_num]);	// ������ �迭 pa[err_num]�� ���
}

main() {
	error(1);	// error �Լ��� 1�� ��
}