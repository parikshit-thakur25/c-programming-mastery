#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in arr :");
    scanf("%d",&n);
    if(n<=0)
{
    printf("INVALID ARRAY SIZE");
    return 0;
}
    int arr[n];
    for(int i =0;i<n;i++)
    {
        printf("Enter the elements of the arr %d :" ,i+1);
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=temp;
    for(int i =0;i<n;i++)
    {
        printf("%d",arr[i]);
    }


    return 0;
}
