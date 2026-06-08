#include <stdio.h>
int main()
{
    int n, pos, ele;
    printf("Enter the elements in the arr:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("INVALID ARRAY SIZE");
        return 0;
    }
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        printf("The elements of the array %d :", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position: ");
    scanf("%d",&pos);
    if(pos<0 || pos>n)
    {
        printf("INVALID POSITION");
        return 0;
    }
    printf("Enter the element: ");
    scanf("%d",&ele);
    for(int i=n-1;i>=pos;i--)
        arr[i+1]=arr[i];
    arr[pos]=ele;
    for(int i=0;i<n+1;i++)
        printf("%d ",arr[i]);
    return 0;
}
