#include <stdio.h>
int main()
{
    int n,pos;
    printf("Enter the number of elenments:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf(" [INVALID ARRAY SIZE] ");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array %d : ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of the element to be deleted : ");
    scanf("%d",&pos);
    if(pos<0 || pos>=n)
    {
    printf("INVALID POSITION");
    return 0;
    }
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
        return 0;
}
