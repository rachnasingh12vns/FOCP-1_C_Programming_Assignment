// Question 4
#include <stdio.h>
#include <stdlib.h>

int digitSum(long long x) {
    if (x < 0) x = -x;
    int sum = 0;
    while (x > 0) {
        sum += (int)(x % 10);
        x /= 10;
    }
    return sum;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long *arr = (long long *)malloc((size_t) n * sizeof(long long));
    int *sums = (int *)malloc((size_t) n * sizeof(int));
    if (!arr || !sums) {
        free(arr);
        free(sums);
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        sums[i] = digitSum(arr[i]);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] == sums[j]) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    free(arr);
    free(sums);
    return 0;
}