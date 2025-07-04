#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num[5];
	int avg, mid;
	int tot = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
		tot += num[i];
	}

	avg = tot / 5;

	for (int i = 0; i < 5; i++) {
		for (int ii = 0; ii < 4; ii++) {
			if (num[ii] > num[ii + 1]) {
				int temp = num[ii];
				num[ii] = num[ii + 1];
				num[ii + 1] = temp;
			}
		}
	}

	mid = num[2];

	printf("%d\n%d", avg, mid);

	return 0;
}