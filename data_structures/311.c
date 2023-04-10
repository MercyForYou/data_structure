//구조체 정의와 변수 선언 1
struct Movie {	// 구조체 Movie 타입의 변수를 더 선언하지 않는다면, 태그 Movie는 생략해도 된다.
	char title[50];
	int release;
	int viewers;
} m1, m2;

struct Movie {	// 태그 Movie는 생략하면 안 된다.
	char title[50];
	int release;
	int viewers;
};

struct Movie m1, m2;

typedef struct Movie {	// 태그 Movie는 생략해도 된다.
	char title[50];
	int release;
	int viewers;
} Movie;

Movie m1, m2;