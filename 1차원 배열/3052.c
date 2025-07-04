#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[10], res[10], tot = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		res[i] = num[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		for (int ii = 0; ii < 10; ii++) {
			if (i != ii && res[i] == res[ii]) {
				res[i] = 42;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (res[i] != 42) {
			tot++;
		}
	}

	printf("%d", tot);

	return 0;
}