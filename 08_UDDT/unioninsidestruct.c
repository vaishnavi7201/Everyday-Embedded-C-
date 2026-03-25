#include<stdio.h>
struct employee
{
	int type;
	union
	{
	    int id;
	    float salary;
	}data;
};
int main()
{
	struct employee e;
	printf("Enter type [1] for id, [2] for salary: ");
	scanf("%d",&e.type);
	if(e.type==1)
	{
	    e.data.id=123;
	    printf("Employee ID: %d at address:%p\n",e.data.id ,&e.data.id);
	}
	else if(e.type==2)
	{
	    e.data.salary=7.89;
	    printf("Employee Salary: %.2f at address %p\n",e.data.salary ,&e.data.salary);
	}
	else
	{
	    printf("Invalid Type!\n");
	}
	return 0;
}
