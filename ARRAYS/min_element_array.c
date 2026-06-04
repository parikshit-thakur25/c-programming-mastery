#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total no of elements present in the array:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("INVALID SIZE");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements in the array %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The minimum element in the array is %d :",min);
    return 0;
}
