// Question 3
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    long long *mat = (long long *)malloc((size_t) r * (size_t)c * sizeof(long long));
    if (!mat) return 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i * c + j]);
        }
    }

    int found = 0;
    for (int i = 0; i < r && !found; i++) {
        for (int j = 0; j < c; j++) {
            long long val = mat[i * c + j];
            int is_min_in_row = 1;
            int is_max_in_col = 1;

            for (int k = 0; k < c; k++) {
                if (mat[i * c + k] < val) {
                    is_min_in_row = 0;
                    break;
                }
            }

            if (!is_min_in_row) continue;

            for (int k = 0; k < r; k++) {
                if (mat[k * c + j] > val) {
                    is_max_in_col = 0;
                    break;
                }
            }

            if (is_min_in_row && is_max_in_col) {
                printf("%d %d %lld\n", i, j, val);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("None\n");
    }

    free(mat);
    return 0;
}