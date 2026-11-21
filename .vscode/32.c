/*2D Arrays
Question 1*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    long long *mat = (long long *)malloc((size_t) r * (size_t)c * sizeof(long long));
    long long *row_sum = (long long *)calloc((size_t) r, sizeof(long long) );
    long long *col_sum = (long long *)calloc((size_t) c, sizeof(long long));

    if (!mat || !row_sum || !col_sum) {
        free(mat);
        free(row_sum);
        free(col_sum);
        return 0;
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i * c + j]);
            row_sum[i] += mat[i * c + j];
            col_sum[j] += mat[i * c + j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%lld", row_sum[i]);
    }
    printf("\n");

    for (int j = 0; j < c; j++) {
        if (j > 0) printf(" ");
        printf("%lld", col_sum[j]);
    }
    printf("\n");

    free(mat);
    free(row_sum);
    free(col_sum);
    return 0;
}