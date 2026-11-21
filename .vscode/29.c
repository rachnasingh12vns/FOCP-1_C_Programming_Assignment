/* 1D Arrays
Question 1*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long *arr = (long long *)malloc((size_t)n * sizeof(long long));
    if (!arr) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    int curr_len = 1;
    int max_len = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            curr_len++;
            if (curr_len > max_len) {
                max_len = curr_len;
            }
        } else {
            curr_len = 1;
        }
    }

    printf("%d\n", max_len);
    free(arr);
    return 0;
}