#include<stdio.h>
#define SQUARE(n) ((n) * (n))
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int res = SQUARE(n);
	printf("Square of a number is %d\n",res);
	return 0;
}

