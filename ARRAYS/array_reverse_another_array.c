#include <stdio.h>
int main()
{
    int n;
    printf("Enter how many elements in the array : ");
    scanf("%d",&n);
     if(n<=0)
     {
        printf("Invalid array size");
        return 0;
     }
     
     
    int arr[n],brr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        {
            brr[i]=arr[n-i-1];
        }
    }
        printf("The reversed array (brr[n]) is : ");
        for(int i=0;i<n;i++)
        {
            printf("%d ",brr[i]);
        }
    
    return 0;
     
}
