#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter 5 elements: ");
	for(int i=0; i<5; i++)
	{
	    scanf("%d",&arr[i]);
	}
        int *p = arr;
	int **s = &p;
	printf("Array accessed using double pointer: \n");
	for(int i=0; i<5; i++)
	{
	    printf("%d ",**s);
	    (*s)++;
	}
	printf("\n");
	return 0;
}
