// Question 4
#include <stdio.h>

int isPerfectSquare(long long n) {
    if (n < 0) return 0;
    long long i = 0;
    while (i * i <= n) {
        if (i * i == n) return 1;
        i++;
    }
    return 0;
}

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        printf("%d\n", isPerfectSquare(n));
    }
    return 0;
}