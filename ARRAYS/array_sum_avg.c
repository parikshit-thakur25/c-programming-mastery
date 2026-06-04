#include <stdio.h>
int main()
{
    float avg;
    int n;
    printf("Enter the no of elements in the array :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("(INVALID ARRAY SIZE)");
        return 0;
    }
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements in the array :");
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("The sum of the array is %d & average is %f :",sum,avg);
    return 0;
}
