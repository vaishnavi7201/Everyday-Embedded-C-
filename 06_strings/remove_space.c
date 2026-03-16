#include<stdio.h>
int main()
{
	char str[20];
	int i=0, j=0;
	printf("Enter the string: ");
	scanf(" %[^\n]",str);
	for(i=0; str[i]!='\0'; i++)
	{
	   if(str[i]==' ')
	   {
		j=i;
	        while(str[j]!='\0')
		{
		     str[j]=str[j+1];
		     j++;
		}
		i--;
	   }
	}
	printf("String after removing space: %s\n",str);
	return 0;
}
