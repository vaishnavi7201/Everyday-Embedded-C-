#include<stdio.h>
struct student
{
   char name[20];
   int rollnumber;
   float marks;
};
int main()
{
        struct student s1;
        printf("Enter your name: ");
	scanf(" %[^\n]",s1.name);
	printf("Enter your roll number: ");
	scanf("%d",&s1.rollnumber);
	printf("Enter your marks: ");
	scanf("%f",&s1.marks);
	printf("Name:%s\n",s1.name);
	printf("Roll Number:%d\n",s1.rollnumber);
	printf("Marks:%f\n",s1.marks);
	return 0;
}
