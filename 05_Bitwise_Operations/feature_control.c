#include<stdio.h>
#include<stdint.h>
int main()
{
    uint8_t status=0x0A;
    status|= (1U<<0)|(1U<<2);
    printf("status value after turning ON LED and MOTOR: %X\n",status);
    status&= ~(1U<<1);
    printf("status value after turning OFF FAN: %X\n",status);
    status^= (1U<<3);
    printf("status value after toggling ALARM: %X\n",status);
    if(status&(1U<<2))
    {
        printf("MOTOR is running\n");
    }
    else
    {
        printf("MOTOR is in OFF state\n");
    }
    printf("Active devices are: \n");
    for(int i=0; i<4; i++)
    {
        if(status & (1U<<i))
        {
	    if(i==0)
            {
		printf("LED\n");
	    }
	    else if(i==1)
	    {
		printf("FAN\n");
            }
	    else if(i==2)
	    {
		printf("Motor\n");
	    }
	    else if(i==3)
	    {
	  	printf("Alarm\n");
	    }
	    else
	    {
		printf("\n");
	    }
	}
    }
    return 0;
}
