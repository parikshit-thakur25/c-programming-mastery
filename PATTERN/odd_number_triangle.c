#include <stdio.h>
int main()
{
    int n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j=j+2)
        {
            printf("%d ",j);
            
            
        }
        printf("\n");
    }
    return 0;
}
