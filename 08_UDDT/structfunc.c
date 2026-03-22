#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int rollnumber;
	float marks;
};
void details(struct student *s);
int main()
{
	struct student s1={"Gowthami",123,501};
	details(&s1);
	printf("Name : %s\n",s1.name);
	printf("RollNumber : %d\n",s1.rollnumber);
	printf("Marks : %.2f\n",s1.marks);
	return 0;
}
void details(struct student *s)
{
	strcpy(s->name,"Vaishnavi");
	s->rollnumber=11095;
	s->marks=450.78;
}

