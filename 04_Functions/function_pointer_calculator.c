#include<stdio.h>
int error=0; 
//Global eror flag:0, 0 means no error and 1 means error occurred
//Used mainly for division by zero
int add(int,int);
int sub(int,int);
int mul(int,int);
int divide(int,int);//Avoided naming div, as it's a standard library function name
int main()
{
	int a, b, op;
	printf("Enter operand 1: ");
	scanf("%d",&a);
	printf("Enter operand 2: ");
	scanf("%d",&b);
	printf("Enter 0 for add, 1 for subtraction, 2 for multiplication and 3 for division: ");
	scanf("%d",&op);
	int (*fp[4])(int,int)={add,sub,mul,divide};
	//function pointer array declaration and assigned address of all functions to each indices.
	//This avoids using switch case or condition logic.
	//Using function pointer table, runtime selection of operation happens by indexing. 
	//This is same as an array of ints
	//This is how embedded drivers and callback tables are designed.
	if(op>=0 && op<=3)
	{
		int result = fp[op](a,b);
		if(error==0)//This means no error caused in division operation
		{
			printf("Result is %d\n",result);
		}
	}
	else{
		printf("Invalid option! try again\n");
	}
	return 0;
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int divide(int a, int b)
{
	if(b==0)
	{
		printf("Error! Divisor should not be zero\n");
		error=1;//set error flag so that main() skips printing result
	}
	else
		return a/b;
}
