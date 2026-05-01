#include<stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main()
{
	int max;
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	max=MAX(a,b);
	printf("Maximum of two numbers: %d\n",max);
	return 0;
}
