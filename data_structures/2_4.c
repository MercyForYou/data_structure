#include <stdio.h>
#include <math.h>	// sqrt �Լ��� pow �Լ��� �̿��ϱ� ���� �������
// ����ü ���ǿ� ���� ����
// ����ü Ÿ�� student
typedef struct student
{// ũ�Ⱑ 100�� ���ڿ��� �л� �̸�, ������ �й��� ������ ����
	char name[100];
	int student_number;
	int score;
} student;
// get_mean �Լ��� get_deviation �Լ� ����
double get_mean(student* students, int num);	// �Ű������� �迭 students�� �����͸� ����
double get_deviation(student* students, int num);	// �Ű������� �迭 students �����͸� ����

int main()
{	// ũ�Ⱑ 1000�� ����ü�� �迭 students�� �л����� �̸�, �й�, ������ ����
	student students[1000];
	int num = 0, i;
	double mean = 0, deviation = 0;

	printf("�л� ���� �Է��ϼ���: ");
	scanf("%d", &num);	// �л� ���� �Է� ����
	// �ݺ����� ���� �Է� ���� �л� ����ŭ �̸�, �й�, ������ �Է� ����
	for (i = 0; i < num; i++)
	{	// �迭 students�� name�� �̸�, student_number�� �й�, score�� ������ �Է� ����
		scanf("%s %d %d", students[i].name, &students[i].student_number, &students[i].score);
	}
	// ���� mean�� get_mean �Լ����� ������ ���� ����
	mean = get_mean(students, num);	// �迭 students�� �л� ���� �Լ��� �Ѱ���
	deviation = get_deviation(students, num);	// �迭 students�� �л� ���� �Լ��� �Ѱ���
	// ���� deviation�� get_deviation �Լ����� ������ ���� ����

	printf("���: %f\nǥ������: %f", mean, deviation);	// ��հ� ǥ������ ���
}
// ��� ���� �Ǽ��̹Ƿ� �ڷ����� double, �Ű������� �迭 students�� num(�л� ��)
double get_mean(student* students, int num)	// �Ű������� �迭 students�� �����͸� ����
{
	double mean = 0;
	int i;
	// �ݺ����� �л� ����ŭ ����
	for (i = 0; i < num; i++)
	{	// ���� mean�� ��� �л����� ������ ���Ͽ� ����
		mean += students[i].score;
	}
	return (mean / num);	// ��� ������ ���� �л� ���� ���� ����� ����
}
// ǥ������ ���� �Ǽ��̹Ƿ� �ڷ����� double, �Ű������� �迭 students�� num(�л� ��)
double get_deviation(student* students, int num)	// �Ű������� �迭 students�� �����͸� ����
{
	double deviation = 0;
	double diff = 0;
	int i;
	// ǥ������ ��꿡 ����ϱ� ���� ���� mean�� ��� ���� ����
	double mean = get_mean(students, num);
	for (i = 0; i < num; i++)	// �ݺ����� �л��� ��ŭ ����
	{	// ���� diff�� (���� - ���) ���� ����
		diff = students[i].score - mean;
		deviation += pow((diff), 2);
		// pow �Լ��� �̿��� ���� deviation�� (���� - ���)�� ������ ���� ���Ͽ� ����
	}
	return sqrt((deviation / num));	// sqrt �Լ��� �̿��� ǥ�������� ������
}