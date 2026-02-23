#include<stdio.h>
void modify(int *ptr);
int main()
{
	int x = 10;
	printf("The original value is %d\n",x);
	int *ptr = &x;
	modify(ptr);
	printf("The modified value is %d\n",x);
	return 0;
}
void modify(int *ptr)
{
	*ptr = 100;
}
