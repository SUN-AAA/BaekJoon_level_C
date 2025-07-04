#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000002];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int count = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
