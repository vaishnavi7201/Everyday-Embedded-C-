#include<stdio.h>
#define SIZE 5
int main()
{
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *last=arr+SIZE-1;
    int *start=arr;
    int *end=arr+1;
    int swap;
    while(end<=last)
    {
        if(*start==0)
        {
            if(*end!=0)
            {
                swap=*start;
                *start=*end;
                *end=swap;
            }
        }
        if(*start!=0)
        {
            start++;
        }
        end++;
    }
    printf("Array elements are: \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
