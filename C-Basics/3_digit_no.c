#include <stdio.h>
int main() {
    int x;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    
    if ((x > 99 && x < 1000) || (x < -99 && x > -1000)) {
        printf("It is a three digit number: %d\n", x);
    } else {
        printf("It is not a three digit number.\n");
    }
    
    return 0;
}
