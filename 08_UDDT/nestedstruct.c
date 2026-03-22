#include<stdio.h>
#include<string.h>
struct address
{
        int housenumber;
        char city[20];
	int pincode;
};
struct student
{
	char name[20];
	int id;
	struct address a;
};
int main() {
	struct student s1;
	strcpy(s1.name,"Vaishnavi");
	s1.id=12;
	s1.a.housenumber=1002;
	strcpy(s1.a.city,"Bengaluru");
	s1.a.pincode=560083;
	printf("Student Name: %s\n",s1.name);
	printf("Student ID: %d\n",s1.id);
	printf("Student Address: \n");
	printf("  House Number: %d\n",s1.a.housenumber);
	printf("  City: %s\n",s1.a.city);
	printf("  Pincode: %d\n",s1.a.pincode);
	return 0;
}
