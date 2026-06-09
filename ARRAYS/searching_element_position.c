#include <stdio.h>
int main()
{
    int n;
    printf("Enter the  total elements of the array : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("INVALID SIZE OF ARRAY\n");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array : ");
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter the value of no to be found:");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            printf(" Position :%d\n",i+1);
        }
    }
    if (flag==0)
    {
        printf("NOT FOUND THE ELEMENT\n");
    }
    return 0;
}
