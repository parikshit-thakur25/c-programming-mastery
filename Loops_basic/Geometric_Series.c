#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    int a = 1; 
    printf("The Geometric Progression is:\n");
    for(int i = 1; i <= n; i++) {
        printf("%d\n", a);
        a = a * 2;
    }
    
    return 0;
}
