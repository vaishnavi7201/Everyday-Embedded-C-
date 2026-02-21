#include<stdio.h>
int main()
{
	char str1[20], str2[20];
	int i=0;
	printf("Enter the string1: ");
	scanf(" %19[^\n]",str1);
	printf("Enter the string2: ");
	scanf(" %19[^\n]",str2);
	while(str1[i] != '\0' && str2[i] != '\0')
	{
	    if(str1[i] != str2[i])
	    {
	         if(str1[i] < str2[i])
	       	 {
	             printf("String1 is smaller than String2\n");
	             return 0;
	       	 }
	       	 else
	         {
	             printf("String1 is greater than String2\n");
	             return 0;
	       	 }
	    }
	    else
	    {
	         i++;
	    }
	}
	if(str1[i] == '\0' && str2[i] != '\0')
	{
	    printf("String1 is smaller than String2\n");
	    return 0;
	}
	else if(str1[i] != '\0' && str2[i] == '\0')
	{
	    printf("String1 is greater than String2\n");
	    return 0;
	}
	else
	{
	    printf("Both the strings are equal\n");
	}
	return 0;
}
