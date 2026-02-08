#include<stdio.h>
int main()
{
	int arr[7];
	printf("Enter 7 elements: ");
	for(int i=0; i<7; i++)
	{
		scanf("%d", &arr[i]);
	}
	int *ptr = arr;
	printf("Array elements accessed using pointers: \n");
	for(int i=0; i<7; i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
	printf("\n");
	ptr = arr;
	return 0;
}

