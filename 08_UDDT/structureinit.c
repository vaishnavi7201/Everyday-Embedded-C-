#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
int main()
{
	struct employee e1;
	e1.id=191;
	strcpy(e1.name,"Vaishnavi");
	e1.salary=4.5;
	printf("Employee details using normal assignment after declaration: \n");
	printf("ID : %d\n",e1.id);
	printf("Name : %s\n",e1.name);
	printf("Salary : %.2f\n",e1.salary);
	struct employee e2 = {200, "Vais", 5.5};
	printf("Employee details using assignment during declaration: \n");
        printf("ID : %d\n",e2.id);
        printf("Name : %s\n",e2.name);
        printf("Salary : %.2f\n",e2.salary);
	struct employee e3;
        printf("Enter employee id: ");
	scanf("%d",&e3.id);
	printf("Enter employee name: ");
	scanf(" %[^\n]",e3.name);
	printf("Enter employee salary: ");
	scanf("%f",&e3.salary);
	printf("Employee details using user input: \n");
        printf("ID : %d\n",e3.id);
        printf("Name : %s\n",e3.name);
        printf("Salary : %.2f\n",e3.salary);
	return 0;
}
