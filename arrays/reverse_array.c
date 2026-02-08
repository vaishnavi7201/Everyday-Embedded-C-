#include<stdio.h>

int main()
{
    int n=7;
    int arr[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp=0;
    int j=0;

    printf("Array before reverse: \n");
    for(int i=0; i<n; i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");

    for(int i = 0; i < n/2; i++)
    {
        j=n-1-i;
        temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
    }

    printf("Reversed Array: \n");
    for(int i=0; i<n; i++)
    {
	printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
