#include<stdio.h>
int main()
{
   char *arr[]={"one", "two", "three"};
   char **ptr = arr;
   for(int i=0; i<3; i++)
   {
      printf("%s\n",*ptr);
      ptr++;
   }
   return 0;
}
