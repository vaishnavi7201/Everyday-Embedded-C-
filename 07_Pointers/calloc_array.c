#include<stdio.h>
#include<stdlib.h>
void calloc_array(int **ptr, int size);
int main()
{
    int size=5;
    int *p=NULL;
    calloc_array(&p,size);
    int *start=p;
    if(start != NULL)
    {
        for(int i=0; i<size; i++)
        {
            printf("%d ",*start);
            start++;
        }
    }
    free(p);
    printf("\n");
    return 0;
}
void calloc_array(int **ptr, int size)
{
    if(size <= 0)
    {
        printf("Size is too small to allocate memory\n");
        return;
    }
    *ptr=calloc(size,sizeof(int));
    if(*ptr == NULL)
    {
        printf("Failed to allocate memory\n");
        return;
    }
    int *start=*ptr;
    printf("Enter array elements: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d",start);
        start++;
    }
}
