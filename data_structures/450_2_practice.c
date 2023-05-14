// 단순 연결리스트를 이용한 박스오피스 합병 프로그램 p.130
#include <stdio.h>
#include <stdlib.h>

// 영화 정보를 저장하는 구조체 Movie 정의
typedef struct Movie {
	char title[50];		// 영화 제목
	int release;		// 개봉 연도
	int viewers;		// 누적 관객수
} Movie;

// 리스트 노드 정의