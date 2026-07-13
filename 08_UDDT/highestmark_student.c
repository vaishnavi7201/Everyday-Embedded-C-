#include<stdio.h>
#define SIZE 3
struct student
{
    char name[20];
    int id;
    float marks;
};
int main()
{
    struct student arr[SIZE];
    struct student *ptr=arr;
    printf("Enter student details: \n");
    for(int i=0; i<SIZE; i++)
    {
        printf("Enter student name: ");
        scanf(" %19[^\n]",ptr->name);
        printf("Enter student ID: ");
        scanf("%d",&ptr->id);
        printf("Enter student marks: ");
        scanf("%f",&ptr->marks);
        if(ptr->marks < 0)
        {
            printf("Marks cannot be less than zero\n");
            printf("Try again!\n");
            return 0;
        }
        ptr++;
    }
    ptr=arr;
    float highest=0;
    struct student *pos=arr;
    for(int i=0; i<SIZE; i++)
    {
        if(ptr->marks > highest)
        {
            highest=ptr->marks;
            pos=ptr;
        }
        ptr++;
    }
    ptr=pos;
    printf("Student who has obtained highest marks: \n");
    printf("Name: %s\n",ptr->name);
    printf("Student ID: %d\n",ptr->id);
    printf("Marks: %.1f\n",ptr->marks);
    return 0;
}
