#include <stdio.h>
int main() {
    int x;
    
    printf("Enter a year: ");
    scanf("%d", &x);
    if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)) {
        printf("It is a leap year.\n");
    } else {
        printf("It is not a leap year.\n");
    }
    
    return 0;
    
}
