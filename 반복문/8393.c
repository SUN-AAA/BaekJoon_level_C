#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, tot = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		tot += i;
	}

	printf("%d", tot);

	return 0;
}