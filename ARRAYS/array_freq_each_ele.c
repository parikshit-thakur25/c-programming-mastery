#include <stdio.h>
int main()
{
    int nums;
    printf("Enter the value of nums : ");
    scanf("%d",&nums);
    if(nums<=0)
    {
        printf("INVALID ARRAY SIZE");
        return 0;
    }
    int arr[nums];
    printf("Enter the nums in the array :\n");
    for(int i=0;i<nums;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("The frequencies are given as :\n");
   for(int i=0;i<nums;i++)
    {
        int freq=0;
        int found=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                found=1;
                break;
            }
        }
        if(found)
            {
                continue;
            }
        for(int k=0;k<nums;k++)
        {
            if(arr[i]==arr[k])
            {
                freq++;
            }
            
        }
        printf("%d :%d\n",arr[i],freq);
    }

   return 0;
}
