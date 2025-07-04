#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d2 == d3) {
		int res = 10000 + d1 * 1000;
		printf("%d", res);
	}
	else if (d1 != d2 && d1 != d3 && d2 != d3) {
		int max = d1;
		if (d2 > d1) {
			if (d3 > d2) {
				max = d3;
			}
			else {
				max = d2;
			}
		}
		else if (d3 > d1) {
			max = d3;
		}

		printf("%d", max * 100);
	}
	else {
		if (d1 == d2 || d1 == d3) {
			int res = 1000 + d1 * 100;
			printf("%d", res);
		}
		else if (d2 == d3) {
			int res = 1000 + d2 * 100;
			printf("%d", res);
		}
	}

	return 0;
}