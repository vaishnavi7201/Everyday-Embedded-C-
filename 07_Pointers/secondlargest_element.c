#include<stdio.h>
int second_large(int *ptr, int size, int *error);
int main()
{
    int size=5;
    int arr[size];
    int error=0; //used to find equal elements
    printf("Enter array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(size < 2)
    {
        printf("Array size is too small to find second largest element\n");
        return 0;
    }
    int result=second_large(arr,size,&error);
    if(error>0) printf("There is no second largest element\n");
    else printf("Second largest element in an array is %d\n",result);
    return 0;
}
int second_large(int *ptr, int size, int *error)
{
    int large, secondlarge;
    if(*ptr > *(ptr+1))
    {
        large=*ptr;
        secondlarge=*(ptr+1);
    }
    else{
        large=*(ptr+1);
        secondlarge=*ptr;
    }
    for(int i=2; i<size; i++)
    {
        if(*(ptr+i) > large)
        {
            secondlarge=large;
            large = *(ptr+i);
        }
        else 
        {
            if((*(ptr+i) < large) && ((secondlarge==large) || (*(ptr+i) > secondlarge)))
            secondlarge=*(ptr+i); 
        }
    }
    if(large == secondlarge)
    {
        *error=1;
        return 0;
    }
    else return secondlarge;
}
