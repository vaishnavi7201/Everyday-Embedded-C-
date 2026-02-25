#include<stdio.h>
int main()
{
	int a=0, b=0;
	printf("Enter two numbers: ");
	scanf("%d %d",&a ,&b);
	int gcd=1, i=0;
	for(i=1; i<= (a<b ? a : b); i++)
	{
		if(a % i == 0 && b % i == 0)
		{
		    if(i>gcd)
		    {
			gcd = i;
		    }
		}
	}
	printf("The gcd of %d and %d is %d\n",a ,b ,gcd);
	return 0;
}
