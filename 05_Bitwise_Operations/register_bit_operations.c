#include<stdio.h>
#include<stdint.h>
void set_bit(uint8_t *reg, uint8_t pos);
void clear_bit(uint8_t *reg, uint8_t pos);
void toggle_bit(uint8_t *reg, uint8_t pos);
int read_bit(uint8_t *reg, uint8_t pos);
int main()
{
	uint8_t reg=0x0F;
	printf("Value before operation is %d\n",reg);
	set_bit(&reg, 4);
	printf("Value after setting bit is %d\n",reg);
	clear_bit(&reg, 3);
	printf("Value after clearing bit is %d\n", reg);
	toggle_bit(&reg, 4);
	printf("Value after toggling a bit is %d\n", reg);
	int bit = read_bit(&reg, 3);
	if(bit == 1)
		printf("The bit value is 1\n");
	else
		printf("The bit value is 0\n");
	return 0;
}
void set_bit(uint8_t *reg, uint8_t pos)
{
	*reg = (1<<pos) | *reg;
}
void clear_bit(uint8_t *reg, uint8_t pos)
{
	*reg = (~(1<<pos)) & *reg;
}
void toggle_bit(uint8_t *reg, uint8_t pos)
{
	*reg = (1<<pos) ^ *reg;
}
int read_bit(uint8_t *reg, uint8_t pos)
{
	int bit=0;
	if(*reg & (1U << pos))
	{	
	 	bit=1;
	}
	else
	{
		bit=0;
	}
	return bit;
}



