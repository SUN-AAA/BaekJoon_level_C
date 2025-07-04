#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct stu {
	char name[50];
	double lec;
	char score[2];
};

int main()
{
	struct stu stu[20];
	double lectot = 0;
	double tot = 0;
	for (int i = 0; i < 20; i++) {
		scanf("%s %lf %s", &stu[i].name, &stu[i].lec, &stu[i].score);

		if (strcmp(stu[i].score, "P") == 0) {
			continue;
		}

		lectot += stu[i].lec;
		if (strcmp(stu[i].score, "A+") == 0) {
			tot += 4.5 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "A0") == 0) {
			tot += 4.0 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "B+") == 0) {
			tot += 3.5 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "B0") == 0) {
			tot += 3.0 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "C+") == 0) {
			tot += 2.5 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "C0") == 0) {
			tot += 2.0 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "D+") == 0) {
			tot += 1.5 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "D0") == 0) {
			tot += 1.0 * stu[i].lec;
		}
		else if (strcmp(stu[i].score, "F") == 0) {
			tot += 0.0 * stu[i].lec;
		}
	}

	tot = tot / lectot;

	printf("%lf", tot);

	return 0;
}