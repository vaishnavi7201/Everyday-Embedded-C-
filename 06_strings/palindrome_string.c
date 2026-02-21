#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter the string: ");
	scanf("%[^\n]",str);
	int i=0, j=0, len=0;
	len = strlen(str);
	j=len-1;
	for(i=0; i<n; i++)
	{
	   if(str[i]==str[j])
	   {	j--;
	   }
           else
	   {
                return 0;
	   }
	}
	return 0;
}
