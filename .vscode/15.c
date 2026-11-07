#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int mid = (n + 1) / 2;
    
    for (int i = 1; i <= mid; i++) {
        int stars = i;
        int spaces = n - 2 * stars;
        
        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    
  
    for (int i = mid - 1; i >= 1; i--) {
        int stars = i;
        int spaces = n - 2 * stars;
        
        for (int j = 0; j < stars; j++) printf("*");
        for (int j = 0; j < spaces; j++) printf(" ");
        for (int j = 0; j < stars; j++) printf("*");
        printf("\n");
    }
    
    return 0;
}