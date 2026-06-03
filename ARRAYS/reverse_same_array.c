#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the  total number of elements in the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements present in the array %d : ",i+1);
        scanf("%d",&arr[i]);
    }   
    for(int i=0;i<n/2;i++)
    {   
        int j=n-i-1;
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("The new  reversed array is : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
