#include <stdio.h>

void main()
{
    int arr[100], key, i, n, mid, low, high;
    printf("Enter number of elements \n");
    scanf("%d", &n);
    printf("Enter %d integer(s) \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search ");
    scanf("%d",&key);

    low = 0;
    high = n-1;
    mid = (low + high)/2;

    while (low <= high)
    {
        if (arr[mid]<key)
        {
            low = mid + 1;
        }
        else if (arr[mid] == key)
        {
            printf("%d found at location %d", key, mid + 1);
            break;
        }
        else
        {
        high = mid - 1;
        }
        mid = (low + high) / 2;
        
    }

        if (low > high)
        {
            printf("Not found %d isn't present in the list\n", key);
        }
    
}