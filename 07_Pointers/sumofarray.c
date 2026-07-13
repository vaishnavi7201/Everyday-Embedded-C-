#include<stdio.h>
int main()
{
    int size=5;
    int arr[size];
    int *ptr=arr;
    int *end=ptr+size;
    printf("Enter array elements: ");
    while(ptr < end)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;
    int sum=0;
    while(ptr < end)
    {
        sum += *ptr;
        ptr++;
    }
    printf("The sum of all elements in an array is %d\n",sum);
    return 0;
}
