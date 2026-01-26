#include<stdio.h>
#include<stdint.h>
#define BIT0 (1U<<0)
#define BIT3 (1U<<3)
#define BIT7 (1U<<7)
#define MASK (BIT0|BIT3|BIT7)
#define SET_MASK(reg,mask) (reg|=mask)
#define CLEAR_MASK(reg,mask) (reg&=(~(mask)))
#define TOGGLE_MASK(reg,mask) (reg^=mask)
#define READ_BIT(reg,bit) ((reg>>bit)&1U)
int main()
{
	uint16_t reg=0x0004;
	printf("Register value before operation is 0x%04x\n",reg);
	SET_MASK(reg,MASK);
	printf("Register value after set mask operation is 0x%04x\n",reg);
	CLEAR_MASK(reg,MASK);
	printf("Register value after clear mask operation is 0x%04x\n",reg);
	TOGGLE_MASK(reg,MASK);
	printf("Register value after toggle mask operation is 0x%04x\n",reg);
	int bit = READ_BIT(reg,3);
	if(bit)
		printf("The bit 3 is SET\n");
	else
		printf("The bit 3 is CLEAR\n");
	return 0;
}

