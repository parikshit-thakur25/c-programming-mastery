#include <stdio.h>
int main() {
    int length, breadth, area, perimeter;
    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    
    if (area > perimeter) {
        printf("The area of rectangle is greater than its perimeter.\n");
    } else if (area < perimeter) {
        printf("The area of rectangle is smaller than its perimeter.\n");
    } else {
        printf("The area and perimeter are same.\n");
    }
    
    return 0;
}
