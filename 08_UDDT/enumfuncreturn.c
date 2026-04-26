#include<stdio.h>
enum status
{
        SUCCESS,
        FAILURE
};
enum status result(int voltage);
int main()
{
        int voltage;
	printf("Enter voltage: ");
	scanf("%d",&voltage);
	enum status res=result(voltage);
        if(res==0)
	{
	    printf("Success\n");
	}
	else
	{
	    printf("Failure\n");
	}
	return 0;
}
enum status result(int voltage)
{
        if(voltage >= 200 && voltage <= 240)
	{
	   return SUCCESS;
        }
	else
	{
	   return FAILURE;
	}
}
