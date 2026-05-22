#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divide(int,int);
int error=0;
int main()
{
   int a, b;
   printf("Enter first operand: ");
   scanf("%d",&a);
   printf("Enter second operand: ");
   scanf("%d",&b);
   int op;
   printf("0 for Addition  1 for Subtraction, 2 for Multiplication and 3 for Division\n");
   printf("Enter operation: ");
   scanf("%d",&op);
   int result;
   int (*fp[4])(int,int)={add,sub,mul,divide};
   if(op >= 0 && op <= 3)
   {
       result=fp[op](a,b);
       if(error==0)
       {
          printf("Result is %d\n",result);
       }
   }
   else
   {
       printf("Invalid option! try again\n");
   }
   return 0;
}
int add(int a, int b)
{
   return a+b;
}
int sub(int a, int b)
{
   return a-b;
}
int mul(int a, int b)
{
   return a*b;
}
int divide(int a, int b)
{
   if(b==0)
   {
      printf("Error! Divisor should not be zero\n");
      error=1;
      return 0;
   }
   return a/b;
}
