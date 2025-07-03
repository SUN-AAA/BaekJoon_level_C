#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	
	if (m + t >= 60) {
		h = h + (m + t) / 60;
		if (h > 23) {
			h = 0 + (h - 24);
		}
		m = (m + t) % 60;
	}
	else {
		m += t;
	}

	printf("%d %d", h, m);

	return 0;
}