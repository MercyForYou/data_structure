#include <stdio.h>
#include <memory.h>
#include <stdlib.h>		// ���� �޸� �Ҵ� malloc �Լ��� ���� ���� �������

void main() {
	char* pc;	// ������ ���� pc�� char�� �����͸� ����Ŵ

	pc = (char*)malloc(1);	// malloc �Լ��� �̿��� 1����Ʈ ũ���� ���� �޸� �Ҵ��� ����
	
	// �޸� �Ҵ��� ������ ��� �� ������ ��ȯ �� ���α׷� ����
	if (pc == NULL) {
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	*pc = 100;	// ���� �޸� �Ҵ� �� ������ pc�� ���� �ش� �޸𸮿� �����Ͽ� 100 ����
	printf("c = %d\n", *pc);	// ����� Ȯ���ϱ� ���� �����
	free(pc);	// free �Լ��� �̿��� ���� �޸� �ݳ�
}

// memory.h �� ������