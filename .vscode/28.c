// Question 5
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    long long *arr = (long long *)malloc((size_t)n * sizeof(long long));
    if (!arr) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    unsigned long long minDiff = (unsigned long long)(-1);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long diff = arr[i] - arr[j];
            unsigned long long absDiff = (diff < 0) ? (unsigned long long)(-diff) : (unsigned long long)diff;
            if (absDiff < minDiff) {
                minDiff = absDiff;
            }
        }
    }

    printf("%llu\n", minDiff);
    free(arr);
    return 0;
}