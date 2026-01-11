#include<stdio.h>
int main()
{
	int i=0;
	int arr[4];
	printf("Enter 4 elements: ");
	for(i=0; i<4; i++)
	{
		scanf("%d",&arr[i]);
	}
	int *p=arr; //address of first element of an array
	printf("Forward Array Traversal: \n");
	for(i=0; i<4; i++) 
	//&arr means address of whole array
	//&arr+1 means address of one step ahead of entire array
	//(int *)(&arr+1) type cast converts it to pointer to int 
	{
		printf("%p : %d\n",(void *)p,*p);
		p++;
		//*(p++) moves forward by sizeof(int) to access next element
	}
	printf("Backward Array Traversal: \n");
	p--;	
//After Forward Array Traversal p moves to one step ahead of entire array address, so decrementing to last element
	for(i=0; i<4; i++)
	{
		printf("%p : %d\n",(void *)p,*p);
		p--;
		//*(p--) moves backward by sizeof(int) to access previous element
	}

	return 0;
}
	

