#include <stdio.h>
#include <stdlib.h>

void main() {
	char* pc;

	pc = (char*)malloc(sizeof(char));

	if (pc == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}
	*pc = 100;
	printf("%d\n", *pc);
}
// free �Լ��� ȣ���� �����ص� �����Ͽ��� ������ ����.
// �׷��� �ݳ� ���� �Ҵ縸 �ϸ� �޸� ������ �޸� ������ �������� ���α׷� ������ ������ ���� �ִ�.