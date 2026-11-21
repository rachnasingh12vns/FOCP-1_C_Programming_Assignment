/*Nested loops
Question 1*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    long long target;
    if (scanf("%d %lld", &n, &target) != 2) return 0;

    long long *arr = (long long *)malloc((size_t) n * sizeof(long long));
    if (!arr) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                count++;
            }
        }
    }

    printf("%lld\n", count);
    free(arr);
    return 0;
}