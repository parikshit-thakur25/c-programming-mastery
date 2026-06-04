#include <stdio.h>
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

    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        } 
    }
    int sec_max=arr[1];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<max && sec_max<arr[i])
        sec_max=arr[i];
    }
    printf("The second largest element is %d : ",sec_max);
    return 0;
}
