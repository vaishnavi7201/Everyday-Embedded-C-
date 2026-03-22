#include<stdio.h>
union employee
{
        int id;
        float salary;
};
int main()
{
        union employee e;
        printf("Employee ID: ");
	scanf("%d",&e.id);
        printf("Salary: ");
	scanf("%f",&e.salary);
        printf("Employee ID: %d at address: %p\n",e.id ,&e.id);
	printf("Salary: %.1f at address: %p\n",e.salary ,&e.salary);
        return 0;
}
