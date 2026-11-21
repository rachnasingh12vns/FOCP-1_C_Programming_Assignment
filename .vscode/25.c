// Question 2
#include <stdio.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    long long n, m;
    if (scanf("%lld %lld", &n, &m) != 2) return 0;

    long long count = 0;
    for (long long x = 1; x <= m; x++) {
        if (gcd(x, n) == 1) {
            count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}