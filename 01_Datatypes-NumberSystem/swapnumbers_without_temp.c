#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a ,&b);
	printf("Numbers before swap: %d %d\n",a ,b);
	int c=a+b;
	a=c-a;
	b=c-b;
	printf("Numbers after swap: %d %d\n",a ,b);
	return 0;
}

