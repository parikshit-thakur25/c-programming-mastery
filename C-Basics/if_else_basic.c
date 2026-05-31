#include <stdio.h>

int main()
{
    int x;
    
    printf("Enter a number of choice: ");
    scanf("%d", &x);
    
    if (x % 2 == 0) {
        printf("It is an even number\n");
    } else {
        printf("It is an odd number\n");
    }
    
    return 0;
}
