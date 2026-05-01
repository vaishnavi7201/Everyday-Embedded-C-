#include<stdio.h>
int main()
{
   int n=0;
   printf("Enter an integer: ");
   scanf("%d",&n);
   if(n<=0)
   {
      printf("Error! Enter an integer greater than 0\n");
      return 1;
   }
   n = n & (n-1);
   printf("The number after clearing rightmost set bit is %d\n",n);
   return 0;
}
