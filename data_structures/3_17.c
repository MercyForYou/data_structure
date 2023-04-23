#include <stdio.h>
#include <stdlib.h>

void main() {
	int* pi;

	pi = (int*)malloc(100 * sizeof(char));

	if (pi == NULL)
		exit(1);

	for (int i = 0; i < 100; i++) {
		pi[i] = i;
		printf("%d ", pi[i]);
	}
	
	free(pi);
}
// malloc을 이용해 메모리를 할당하면 void*를 리턴하므로 사용하고자 하는 타입으로 캐스팅을 해야 한다.
// 타입이 동일해야지 적절한 공간에 적절한 데이터를 쓰게 된다.
// 1바이트 char형 메모리에 int 타입의 데이터를 쓰게 되는 오류가 생긴다.

// 실행은 되지만 인덱스 '99'가 다음 비스택 버퍼에 대해 유효한 인덱스 범위를 넘어간다는 경고가 출력됨