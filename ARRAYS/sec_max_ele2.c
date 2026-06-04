#include <stdio.h>
int main()
{
	int n;
	int max,sec_max;
	printf("Enter how much elements in the array?:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter the elements if the array");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	sec_max=arr[1];
	for(int i=1; i<n; i++)
    {
        if(max<arr[i])
        
        {
            sec_max=max;
            
            max=arr[i];
        }
    
    
	else if(arr[i]!=max && sec_max<arr[i])
	{
	  
	    sec_max=arr[i];
	  
	}
    }
	if(sec_max==max)
	{
	    printf("No  Second largest numbers are there");
	    
	}
	else{
	    printf("The second largest element is %d:",sec_max);
	}
	return 0;
}
	  
	    
