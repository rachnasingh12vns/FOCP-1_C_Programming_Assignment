// Question 4
#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    long long *mat = (long long *)malloc((size_t)r * (size_t)c * sizeof(long long));
    if (!mat) return 0;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%lld", &mat[i * c + j]);
        }
    }

    int peaks = 0;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            long long val = mat[i * c + j];
            int is_peak = 1;

            for (int d = 0; d < 4; d++) {
                int ni = i + dr[d];
                int nj = j + dc[d];
                if (ni >= 0 && ni < r && nj >= 0 && nj < c) {
                    if (val <= mat[ni * c + nj]) {
                        is_peak = 0;
                        break;
                    }
                }
            }

            if (is_peak) {
                peaks++;
            }
        }
    }

    printf("%d\n", peaks);
    free(mat);
    return 0;
}