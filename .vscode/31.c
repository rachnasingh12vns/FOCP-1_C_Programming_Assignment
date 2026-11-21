// Question 2
#include <stdio.h>
#include <string.h>

int main() {
    char s[10005];
    if (scanf("%10004s", s) != 1) return 0;

    size_t len = strlen(s);
    if (len == 0) return 0;

    size_t count = 1;
    for (size_t i = 1; i <= len; i++) {
        if (i < len && s[i] == s[i - 1]) {
            count++;
        } else {
            printf("%c%zu", s[i - 1], count);
            count = 1;
        }
    }
    printf("\n");

    return 0;
}