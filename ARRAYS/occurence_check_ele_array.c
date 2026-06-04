#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no of elements : ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("INVALID ARRAY SIZE !!");
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements of the array %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    int count=0;
    int key;
    printf("Enter the no to be searched : ");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            count++;

        }
    }
   
    if(flag==0)
    printf("NOT FOUND ELEMENT");
 
    else
    {
        printf("%d",count);
    }
    return 0;
}
