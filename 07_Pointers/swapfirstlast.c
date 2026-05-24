#include<stdio.h>
void swap(int *ptr, int size);
int main()
{
    int size=5;
    int arr[size];
    printf("Enter array elements: ");
    int *ptr=arr;
    for(int i=0; i<size; i++)
    {
        scanf("%d",ptr+i);
    }
    swap(ptr,size);
    printf("Array after swapping first and last elements: \n");
    for(int i=0; i<size; i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    return 0;
}
void swap(int *ptr, int size)
{
    if(size <= 1) return;
    int temp=*ptr;
    *ptr=*(ptr+(size-1));
    *(ptr+(size-1))=temp;
}
