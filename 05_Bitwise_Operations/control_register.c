#include<stdio.h>
#include<stdint.h>
int main()
{
    uint8_t reg=0x0F;
    printf("Original register value: %X\n",reg);
    reg|= (1U<<1)|(1U<<5);
    printf("Register value after set bit 1 and 5: %X\n",reg);
    reg&= ~(1U<<1);
    printf("Register value after clear bit 1: %X\n",reg);
    reg^= (1U<<5);
    printf("Register value after toggle bit 5: %X\n",reg);
    if(reg&(1U<<5))
    {
        printf("Bit 5 is ON\n");
    }
    else
    {
        printf("Bit 5 is OFF\n");
    }
    return 0;
}
