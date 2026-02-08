#include<stdio.h>
void swap(int *p, int *q);
int main()
{
	int a, b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Numbers before swap: %d %d\n",a ,b);
	swap(&a,&b);
	printf("Numbers after swap: %d %d\n",a ,b);
	return 0;
}
void swap(int *p, int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
