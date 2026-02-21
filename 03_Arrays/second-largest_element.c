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
    int large, second_larg;
    if(arr[0] > arr[1]) {
         large = arr[0];
         second_larg = arr[1];
    }
    else {
         large = arr[1];
         second_larg = arr[0];
    }
    for(int i = 2; i < n; i++)
    {
        if(arr[i] > large)
        {
            second_larg = large;
            large = arr[i];
            
        }
        if(arr[i] > second_larg && arr[i] < large)
        {
            second_larg = arr[i];
        }
    }
    printf("The second largest element is %d\n", second_larg);
    return 0;
}

