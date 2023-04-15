#include <stdio.h>
#include <math.h>	// sqrt 함수와 pow 함수를 이용하기 위한 헤더파일
// 구조체 정의와 변수 선언
// 구조체 타입 student
typedef struct student
{// 크기가 100인 문자열로 학생 이름, 정수로 학번과 성적을 받음
	char name[100];
	int student_number;
	int score;
} student;
// get_mean 함수와 get_deviation 함수 선언
double get_mean(student* students, int num);	// 매개변수로 배열 students의 포인터를 받음
double get_deviation(student* students, int num);	// 매개변수로 배열 students 포인터를 받음

int main()
{	// 크기가 1000인 구조체의 배열 students에 학생들의 이름, 학번, 성적을 저장
	student students[1000];
	int num = 0, i;
	double mean = 0, deviation = 0;

	printf("학생 수를 입력하세요: ");
	scanf("%d", &num);	// 학생 수를 입력 받음
	// 반복문을 통해 입력 받은 학생 수만큼 이름, 학번, 성적을 입력 받음
	for (i = 0; i < num; i++)
	{	// 배열 students의 name에 이름, student_number에 학번, score에 성적을 입력 받음
		scanf("%s %d %d", students[i].name, &students[i].student_number, &students[i].score);
	}
	// 변수 mean에 get_mean 함수에서 리턴한 값을 넣음
	mean = get_mean(students, num);	// 배열 students와 학생 수를 함수에 넘겨줌
	deviation = get_deviation(students, num);	// 배열 students와 학생 수를 함수에 넘겨줌
	// 변수 deviation에 get_deviation 함수에서 리턴한 값을 넣음

	printf("평균: %f\n표준편차: %f", mean, deviation);	// 평균과 표준편차 출력
}
// 평균 값이 실수이므로 자료형은 double, 매개변수로 배열 students와 num(학생 수)
double get_mean(student* students, int num)	// 매개변수로 배열 students의 포인터를 받음
{
	double mean = 0;
	int i;
	// 반복문을 학생 수만큼 돌림
	for (i = 0; i < num; i++)
	{	// 변수 mean에 모든 학생들의 성적을 더하여 저장
		mean += students[i].score;
	}
	return (mean / num);	// 모든 성적의 합을 학생 수로 나눈 평균을 리턴
}
// 표준편차 값이 실수이므로 자료형은 double, 매개변수로 배열 students와 num(학생 수)
double get_deviation(student* students, int num)	// 매개변수로 배열 students의 포인터를 받음
{
	double deviation = 0;
	double diff = 0;
	int i;
	// 표준편차 계산에 사용하기 위해 변수 mean에 평균 값을 저장
	double mean = get_mean(students, num);
	for (i = 0; i < num; i++)	// 반복문을 학생수 만큼 돌림
	{	// 변수 diff에 (성적 - 평균) 값을 저장
		diff = students[i].score - mean;
		deviation += pow((diff), 2);
		// pow 함수를 이용해 변수 deviation에 (성적 - 평균)을 제곱한 값을 구하여 더함
	}
	return sqrt((deviation / num));	// sqrt 함수를 이용해 표준편차를 리턴함
}