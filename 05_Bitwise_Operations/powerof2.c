#include<stdio.h>
int main()
{
   int n=0;
   printf("Enter an integer: ");
   scanf("%d",&n);
   if(n > 0 && (n & (n-1)) == 0)
   {
      printf("The entered number is power of 2\n");
   }
   else
   {
      printf("The entered number is not power of 2\n");
   }
   return 0;
}
