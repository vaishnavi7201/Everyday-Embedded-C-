#include<stdio.h>
int main()
{
	unsigned int num;
	printf("Enter an integer: ");
	scanf("%u",&num);
	int count=0;
	while(num!=0)
	{
		num = num & (num-1);
		count++;
	}
	printf("Number of set bits in a given integer is %d\n",count);
	return 0;
}
