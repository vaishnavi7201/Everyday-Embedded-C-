#include<stdio.h>
int main()
{
	int arr[5], temp1[5], temp2[5];
	int i=0, p=0, j=0;
	printf("Enter 5 elements: ");
	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter positions: ");
	scanf("%d",&p);
	p = p % 5;
	if(p < 0)
	{
		printf("Invalid Position\n");
		return 0;
	}
	for(i=0; i<5; i++)
	{
		j=i-p;
		if(j<0)
		{
			j=5+j;
			temp1[j]=arr[i];
		}
		else
		{
			temp1[j]=arr[i];
		}
	}
	printf("Array after rotating left by %d positions: \n",p);
	for(i=0; i<5; i++)
	{
		printf("%d ",temp1[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
	{
		j=i+p;
		if(j>4)
		{
			j=j-5;
			temp2[j]=arr[i];
		}
		else
		{
			temp2[j]=arr[i];
		}
	}
	printf("Array after rotating right by %d positions: \n",p);
	for(i=0; i<5; i++)
	{
		printf("%d ",temp2[i]);
	}
	printf("\n");
	return 0;
}
