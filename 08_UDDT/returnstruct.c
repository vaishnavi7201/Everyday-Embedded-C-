#include<stdio.h>
#include<string.h>
struct employee
{
   char name[20];
   int id;
   float salary;
};
struct employee data();
int main()
{
   struct employee e;
   e=data();
   printf("Employee Name: %s\n",e.name);
   printf("Employee ID: %d\n",e.id);
   printf("Employee Salary: %.2f\n",e.salary);
   return 0;
}
struct employee data()
{
  struct employee e;
  strcpy(e.name,"Gowthami");
  e.id=1023;
  e.salary=5.5;
  return e;
}
