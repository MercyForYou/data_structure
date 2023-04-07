#include <stdio.h>
// 임의의 값의 위치를 찾는 search 함수 선언
void search(int a[], int num, int* index);
 
int main()
{	// 크기가 10인 배열 a에 주어진 기본값 10개를 넣음
	int a[10] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
	int i;
	int num = 0;
	int index = 10;	// 인덱스 위치를 나타낼 index 변수를 10으로 초기화 (0~9가 아닌 수)
	// 0으로 초기화하면 인덱스가 0일 때 문제가 발생함
	scanf("%d", &num);
	// num 변수에 입력할 정수를 받음
	search(a, num, &index);
	// index 변수의 주소값을 이용해 리턴값 없이 search 함수 호출
	if (index == 10)	// 크기가 10인 배열이므로 인덱스는 0~9까지 존재
		printf("입력하신 값은 배열에 없습니다.");	// index 변수에 초기값 10이 그대로 있음
	else // search 함수를 통해 index 변수에 0~9까지의 인덱스 번호가 저장
		printf("입력하신 값은 배열의 %d번 인덱스에 있습니다.", index);
}
// search 함수에 배열 a, 입력받은 정수(num), 인덱스 위치 정보(index)를 매개변수로
void search(int a[], int num, int* index)	// index는 주소값을 넘겼기 때문에 포인터로 받음
{	// 반복문을 통해 배열 a에 입력받은 정수가 있는지 확인
	int i;
	for (i = 0; i < 10; i++)
	{	// 배열 a에 입력받은 정수가 있으면 index에 해당 인덱스 번호를 넣음
		if (num == a[i])
		{
			*index = i;
		}
	}
}