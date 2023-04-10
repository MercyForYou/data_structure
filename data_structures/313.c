#include <stdio.h>
#include <string.h>

typedef struct Date {
	int year;
	int month;
	int day;
} Date;

typedef struct NestedMovie {
	char title[50];
	Date release;
	int viewers;
} NestedMovie;

void main() {
	NestedMovie m1 = { "¸í·®", {2014, 7, 30}, 1761 };
	NestedMovie m2;
	strcpy(m2.title, "½Å°úÇÔ²²-ÁË¿Í¹ú");
	m2.release.year = 2017;
	m2.release.month = 12;
	m2.release.day = 20;
	m2.viewers = 1441;

	printf("%s %d %d %d %d", m2.title, m2.release.year, m2.release.month, m2.release.day, m2.viewers);
}