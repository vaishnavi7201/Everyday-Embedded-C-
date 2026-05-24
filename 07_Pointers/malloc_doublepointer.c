#include<stdio.h>
#include<stdlib.h>
void allocate_memory(int **ptr);
int main()
{
    int *ptr=NULL;
    allocate_memory(&ptr);
    if(ptr != NULL)
    {
        printf("Value is %d\n",*ptr);
    }
    free(ptr);
    return 0;
}
void allocate_memory(int **ptr)
{
    *ptr=malloc(sizeof(int));
    if(*ptr == NULL)
    {
        printf("Allocation failed\n");
        return;
    }
    else **ptr=156;
}
