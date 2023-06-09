#include <stdio.h>
#include <stdlib.h>

void main() {
	int* pi;	// int형 데이터를 가리키는 포인터 변수 pi 선언

	pi = (int*)malloc(100 * sizeof(char));	// malloc 함수를 이용해 100 바이트의 동적 메모리 할당
	// 메모리 할당 실패시 프로그램 종료
	if (pi == NULL)
		exit(1);
	// 반복문을 이용해 메모리에 값을 저장
	for (int i = 0; i < 100; i++) {
		pi[i] = i;	// 포인터 이름을 이용해 배열처럼 사용함
		printf("%d ", pi[i]);	// 결과를 확인하기 위해 출력
	}
	
	free(pi);	// 할당한 메모리 반납
}
// malloc을 이용해 메모리를 할당하면 void*를 리턴하므로 사용하고자 하는 타입으로 캐스팅을 해야 한다.
// 타입이 동일해야지 적절한 공간에 적절한 데이터를 쓰게 된다.
// 1바이트 char형 메모리에 int 타입의 데이터를 쓰게 되는 오류가 생긴다.

// 실행은 되지만 인덱스 '99'가 다음 비스택 버퍼에 대해 유효한 인덱스 범위를 넘어간다는 경고가 출력됨