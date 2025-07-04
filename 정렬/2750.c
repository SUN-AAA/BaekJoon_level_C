#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);

	int* num = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int ii = 0; ii < n - 1; ii++) {
			if (num[ii] > num[ii + 1]) {
				int temp = num[ii];
				num[ii] = num[ii + 1];
				num[ii + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", num[i]);
	}

	free(num);
	return 0;
}