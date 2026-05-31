#include <stdio.h>
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if ((n % 3 == 0 || n % 5 == 0) && (n % 15 != 0)) {
        printf("THE NUMBER IS DIV BY 5 OR 3 BUT NOT BY 15\n");
    } else {
        printf("The number does not satisfy the condition.\n");
    }
    
    return 0;
}
