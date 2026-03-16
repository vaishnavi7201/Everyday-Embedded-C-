#include<stdio.h>
int main()
{
	int i=0, j=0;
	int count=0;
	char str[20];
	int k=0;
	printf("Enter the string: ");
	scanf(" %[^\n]",str);
	for(i=0; str[i]!='\0'; i++)
	{
	   for(k=0; k<i; k++)
	   {
	      if(str[k]==str[i])
	      {
		break;
	      }
	   }
	   if(k==i)
	   {
	      count=1;
	      for(j=i+1; str[j]!='\0'; j++)
	      {
	           if(str[i]==str[j])
	           {
		      count++;
	           }
	       }
               printf("%c : %d\n",str[i] ,count);
	   }
         }
         return 0;
}
