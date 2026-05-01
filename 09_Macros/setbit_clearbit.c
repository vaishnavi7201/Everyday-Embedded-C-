#include<stdio.h>
#define SET_BIT(reg,a) ((reg) | (1U << a))
#define CLEAR_BIT(reg,b) ((reg) & (~(1U << b)))
int main()
{
	int reg;
	printf("Enter a value: ");
	scanf("%d",&reg);
	int a,b;
	printf("Enter bit to set: ");
	scanf("%d",&a);
	reg=SET_BIT(reg, a);
	printf("Value after setting a bit: %X\n",reg);
	printf("Enter bit to clear :");
	scanf("%d",&b);
	reg=CLEAR_BIT(reg, b);
	printf("Value after clearing a bit: %X\n",reg);
	return 0;
}
