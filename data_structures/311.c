//����ü ���ǿ� ���� ���� 1
struct Movie {	// ����ü Movie Ÿ���� ������ �� �������� �ʴ´ٸ�, �±� Movie�� �����ص� �ȴ�.
	char title[50];
	int release;
	int viewers;
} m1, m2;

struct Movie {	// �±� Movie�� �����ϸ� �� �ȴ�.
	char title[50];
	int release;
	int viewers;
};

struct Movie m1, m2;

typedef struct Movie {	// �±� Movie�� �����ص� �ȴ�.
	char title[50];
	int release;
	int viewers;
} Movie;

Movie m1, m2;