#include <stdio.h>

int main() {
    int n;
    
    printf("Enter an integer value: ");
    scanf("%d", &n);
    
    if (n < 0) {
        n = n * (-1);
        printf("The absolute value of the given integer is: %d\n", n);
    } else {
        printf("The value will be same as: %d\n", n);
    }
    
    return 0;
}
