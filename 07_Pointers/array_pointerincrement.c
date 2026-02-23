#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter 5 elements: ");
	for(int i=0; i<5; i++)
	{
	    scanf("%d",&arr[i]);
	}
	int *ptr = arr;
	printf("Array elements accessed using pointer increment: \n");
	for(int i=0; i<5; i++)
	{
	    printf("%d ",*ptr);
	    ptr++;
	}
	printf("\n");
	return 0;
}

