#include <stdio.h>

int main() {
    int n, i, a;
    
    printf("Enter the first element: ");
    scanf("%d", &a);
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("The Arithmetic Progression is:\n");
    for(i = 1; i <= n; i++) {
        printf("%d\n", a);
        a = a + 2; 
    }

    return 0;
}
