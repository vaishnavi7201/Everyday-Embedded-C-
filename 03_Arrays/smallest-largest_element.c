#include<stdio.h>

int main()
{
    int n = 5;
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int small = arr[0];
    int large = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < small)
            small = arr[i];

        if(arr[i] > large)
            large = arr[i];
    }

    printf("The smallest element is %d\n", small);
    printf("The largest element is %d\n", large);

    return 0;
}
