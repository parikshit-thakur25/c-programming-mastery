#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the elements of the array : ");
    scanf("%d",&n);
    if(n<2)
{
    printf("Need at least 2 elements");
    return 0;
}
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array :");
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        } 
    }
    int sec_min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>min && arr[i]<sec_min)
        sec_min=arr[i];
    }
    printf("The second minimum element is %d : ",sec_min);
    return 0;
}
