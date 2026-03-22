#include<stdio.h>
#include<string.h>
union test
{
	int id;
	float voltage;
	char profile[20];
};
int main()
{
	union test t;
	t.id=50;
	printf("ID: %d at address: %p\n",t.id ,&t.id);
	t.voltage=234.4;
	printf("Voltage: %.1f at address: %p\n",t.voltage ,&t.voltage);
	strcpy(t.profile,"Block Load");
	printf("Profile: %s at address: %p\n",t.profile ,t.profile);
	return 0;
}
