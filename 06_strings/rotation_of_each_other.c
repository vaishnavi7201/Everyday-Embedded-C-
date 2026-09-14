#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50], str2[50];
	printf("Enter string1: ");
	scanf(" %49[^\n]",str1);
	printf("Enter string2: ");
	scanf(" %49[^\n]",str2);
	char *ptr1=str1;
	char *ptr2=str2;
	if(strlen(str1) != strlen(str2))
	{
	    printf("Both the strings are not rotation of each other\n");
	    return 0;
	}
	if(strcmp(str1, str2) == 0)
	{
	    printf("Both the strings are rotation of each other\n");
	    return 0;
	}
	int l=strlen(str1);
	char temp;
	int shift=0;
	while(shift != l)
	{
	    for(ptr1=str1; *ptr1 != '\0'; ptr1++)
	    {
	        if(ptr1 == str1) temp=*ptr1;
	        if(ptr1 != str1+(l-1))
	        {
	            *ptr1=*(ptr1+1);
	        }
	        else
	        {
	            *ptr1=temp;
	        }
	    }
	    shift++;
	    if(strcmp(str1, str2) == 0)
	    {
	        printf("Both the strings are rotation of each other\n");
	        printf("String2 is left rotation by %d time\n",shift);
	        printf("String2 is right rotation by %d time\n",l-shift);
	        return 0;
	    }
	    if(shift==(l-1))
	    {
	        printf("Both the strings are not rotation of each other\n");
	        return 0;
	    }
	}
	return 0;
}
