#include<stdio.h>
int main()
{
	int N, rev=0, mod=0;
	printf("Enter a number: ");
	scanf("%d",&N);
	int pali=N;
	if(N<0)
	{
	    printf("Invalid Input\n");
	    return 0;
	}
	else
	{
		while(N>0)
		{
		    mod = N%10;
		    N = N/10;
		    rev = rev*10+mod;
		}
	}
	if(rev == pali)
	{
	    printf("The given number is a palindrome\n");
	}
	else
	{
	    printf("The given number is not a palindrome\n");
	}
	return 0;
}

