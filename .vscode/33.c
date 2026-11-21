//Question 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long *mat = (long long *)malloc((size_t)n * (size_t)n * sizeof(long long));
    if (!mat) return 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &mat[i * n + j]);
        }
    }

    int symmetric = 1;
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = i + 1; j < n; j++) {
            if (mat[i * n + j] != mat[j * n + i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "YES" : "NO");
    free(mat);
    return 0;
}