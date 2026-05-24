#include<stdio.h>
struct student
{
    int id;
    char name[20];
};
int main()
{
    struct student s1;
    struct student *ptr=&s1;
    printf("Enter student ID: ");
    scanf("%d",&ptr->id);
    printf("Enter student name: ");
    scanf(" %19[^\n]",ptr->name);
    printf("Student Details: \n");
    printf("Student ID: %d\n",ptr->id);
    printf("Student Name: %s\n",ptr->name);
    return 0;
}
