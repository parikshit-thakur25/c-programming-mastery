#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of rows (Enter odd number like 3, 5, 7): ");
    scanf("%d", &n);
    int center = (n + 1) / 2;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == center || i == center) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
