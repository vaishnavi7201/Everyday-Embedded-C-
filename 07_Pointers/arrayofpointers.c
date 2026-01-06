#include<stdio.h>
int main()
{
	int i=0;
	int arr[5] = {1, 2, 3, 4, 5}; //Array of integers
	int *ptr1[5]; //Array of Pointers to int
	int (*ptr2)[5] = &arr; //Pointer to an array of int
	for(i=0; i<5; i++)
	{
		ptr1[i]=&arr[i];
	}
	printf("The values when accessed using array of ints: \n");
	for(i=0; i<5; i++)
	{
		printf("At %p: %d\n",&arr[i],arr[i]);
	}
	printf("\n");
	printf("The values when accessed using array of pointers to int: \n");
	for(i=0; i<5; i++)
	{
		printf("At %p: %d\n",&ptr1[i],*ptr1[i]);
	}
	printf("\n");
	printf("The values when accessed using pointer to an array: \n");
	for(i=0; i<5; i++)
	{
		printf("%d\n",(*ptr2)[i]);
	}
	printf("\n");
	return 0;
}
