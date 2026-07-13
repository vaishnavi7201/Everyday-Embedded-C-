#include<stdio.h>
#include<string.h>
int main()
{
   char str[20];
   printf("Enter any string: ");
   scanf(" %19[^\n]",str);
   int l=strlen(str);
   char *start=str;
   char *end=str+(l-1);
   char swap;
   while(start < end)
   {
      swap=*start;
      *start=*end;
      *end=swap;
      start++;
      end--;
   }
   printf("%s\n",str);
   return 0;
}
