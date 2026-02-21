#include<stdio.h>
int main()
{
	int N;
	printf("Enter N: ");
	scanf("%d",&N);
	int a=0, b=1, fib=0;
	int i=0;
	if(N<=0)
	{
		printf("Invalid Number\n");
	}
	else if(N==1)
	{
		printf("First %d fibonacci numbers: \n",N);
		printf("%d\n",a);
	}
	else{
		printf("First %d fibonacci numbers: \n",N);
		printf("%d %d ",a,b);
		for(i=2; i<N; i++)
		{
			fib=a+b;
			printf("%d ",fib);
			a=b;
			b=fib;
		}
		printf("\n");
	}
	return 0;
}
