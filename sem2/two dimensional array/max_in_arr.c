#include <stdio.h>

void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value for array\n");
        scanf("%d", &arr[i]);
        /* code */
    }

    int max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            /* code */
        }
        

        /* code */
    }
    printf("Maximum is %d \n", max);

    int min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            /* code */
        }

        /* code */
    }
    printf("Minimum is %d \n", min);
}