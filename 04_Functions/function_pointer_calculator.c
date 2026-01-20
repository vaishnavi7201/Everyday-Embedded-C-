#include<stdio.h>
int error=0;
int add(int,int);
int sub(int,int);
int mul(int,int);
int divi(int,int);
int main()
{
	int a, b, op;
	printf("Enter operand 1: ");
	scanf("%d",&a);
	printf("Enter operand 2: ");
	scanf("%d",&b);
	printf("Enter 0 for add, 1 for subtraction, 2 for multiplication and 3 for division: ");
	scanf("%d",&op);
	int (*fp[4])(int,int)={add,sub,mul,divi};
	if(op>=0 && op<=3)
	{
		int result = fp[op](a,b);
		if(error==0)
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
int divi(int a, int b)
{
	if(b==0)
	{
		printf("Error! Divisor should not be zero\n");
		error=1;
	}
	else
		return a/b;
}
