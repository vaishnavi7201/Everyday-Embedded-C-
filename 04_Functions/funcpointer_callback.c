#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
void process(int,int,int (*fp)(int,int));
int main() {
   int a, b;
   printf("Enter first operand: ");
   scanf("%d",&a);
   printf("Enter second operand: ");
   scanf("%d",&b);
   int op;
   printf("0 for Addition  1 for Subtraction, and 2 for Multiplication\n");
   printf("Enter operation: ");
   scanf("%d",&op);
   int (*fp)(int,int);
   if(op==0) fp=add;
   else if(op==1) fp=sub;
   else if(op==2) fp=mul;
   else printf("Invalid option! try again\n");
   process(a,b,fp);
   return 0;
}
void process(int a, int b, int (*fp)(int,int))
{
   int result=fp(a,b);
   printf("result is %d\n",result);
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
