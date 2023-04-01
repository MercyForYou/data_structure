#include <stdio.h>
#include <math.h>

int get_mean(student students[], int num);
int get_deviation(student students[], int num);

typedef struct student 
{
	char name[100];
	int student_number;
	int score;
} student;

int main() 
{
	student students[1000];
	int num = 0, i;
	
	printf("학생 수를 입력하세요: ");
	scanf("%d", &num);
	for (i = 0; i < num; i++) 
	{
		scanf("%s %d %d", &students[i].name, &students[i].student_number, &students[i].score);
	}
	get_mean(student students[], int num);
	get_deviation(student students[], int num);
}

int get_mean(student students[], int num)
{
	double mean = 0, i;

	for (i = 0; i < num; i++)
	{
		mean += students[i].score;
	}
	return (mean / num);
}

int get_deviation(student students[], int num)
{
	double deviation = 0, i;

	mean = get_mean(student students[], int num);
	for (i = 0; i < num; i++)
	{
		deviation += pow((students[i].score) - mean), 2);
	}
	return sqrt((deviation / num));
}