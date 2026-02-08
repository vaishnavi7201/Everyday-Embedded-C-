#include<stdio.h>
int fib(int n);
int main()
{
	int N;
	printf("Enter N: ");
	scanf("%d",&N);
	int n=0;
	if(N<=0)
	{
		printf("Invalid Number!\n");
	}
	else
	{
		printf("First %d Fibonacci Numbers: \n",N);
		for(n=0; n<N; n++)
		{
			printf("%d ",fib(n));
		}
		printf("\n");
	}
	return 0;
}
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
