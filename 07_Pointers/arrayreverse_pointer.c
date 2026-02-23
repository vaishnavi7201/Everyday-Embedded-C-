#include<stdio.h>
int main()
{
	int arr[5];
	printf("Enter 5 elements: ");
	for(int i=0; i<5; i++)
	{
	    scanf("%d",&arr[i]);
	}
	int *start = arr;
	int *end = &arr[5-1];
	int temp=0;
	while(start < end)
	{
	    temp = *start;
	    *start = *end;
	    *end = temp;
	    start++;
	    end--;
	}
	printf("Reversed array is: \n");
	for(int i=0; i<5; i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
