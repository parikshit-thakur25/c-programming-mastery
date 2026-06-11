#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    if(n<=0)
{
    printf("INVALID ARRAY SIZE");
    return 0;
}
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("Enter the elements of the array %d : ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
        if(arr[i]==arr[j])
        {
            for(int k=i;k<n-1;k++)
            {
                arr[k]=arr[k+1];
            }
            i--;
            n--;
            break;
        }
    }
    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }

    return 0;
}
