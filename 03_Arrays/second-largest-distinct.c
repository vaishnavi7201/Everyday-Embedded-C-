#include<stdio.h>
#define SIZE 4
int main()
{
	int arr[SIZE];
	int *ptr=arr;
	printf("Enter array elements: ");
	for(int i=0; i<SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	if(SIZE==1)
	{
		printf("There is no second largest element in array\n");
		return 0;
	}
	int second_large, large;
	if(*ptr > *(ptr+1))
	{
		large=*ptr;
		second_large=*(ptr+1);
	}
	else
	{
		large=*(ptr+1);
		second_large=*ptr;
	}
	for(ptr=arr+2; ptr<arr+SIZE; ptr++)
	{
		if(large==second_large && *ptr < second_large)
		{
			second_large=*ptr;
		}
		else
		{
			if(*ptr > large && *ptr > second_large)
			{
				second_large=large;
				large=*ptr;
		        }
			if(*ptr > second_large && *ptr < large)
			{
				second_large=*ptr;
			}
	        }
	}
	if(second_large == large)
	{
		printf("There is no second largest element in an array\n");
		return 0;
	}
	printf("Second largest element in an array is %d\n",second_large);
	return 0;
}
