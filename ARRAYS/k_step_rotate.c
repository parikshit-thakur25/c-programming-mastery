#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the value of n : ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("INVALID ARRAY SIZE");
        return 0;
    }

    int arr[n];

    printf("Enter the array elements : ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k : ");
    scanf("%d", &k);

    k = k % n; // for handling k>n

    for(int i = 0; i < k; i++)
    {
        int first = arr[0];

        for(int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }

        arr[n - 1] = first;
    }

    printf("Array after left rotation:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
