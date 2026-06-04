#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    if(n<=0)
    {
    printf("(INVALID ARRAY SIZE)");
    return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the elements %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;

        }
            
        
    }
      printf(" ODD: %d & EVEN: %d",odd,even);
      return 0;

}
