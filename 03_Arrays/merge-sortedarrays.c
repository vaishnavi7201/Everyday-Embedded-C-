#include<stdio.h>
int main()
{
	int arr1[5], arr2[4], merge[9];
	int i=0, k=0, temp=0, j=0;
	printf("Enter 5 elements: ");
	for(i=0; i<5; i++)
	{
	   scanf("%d",&arr1[i]);
	}
	printf("Enter 4 elements: ");
	for(i=0; i<4; i++)
	{
	   scanf("%d",&arr2[i]);
	}
	for(i=0; i<5; i++)
	{
	   for(j=i+1; j<5; j++)
	   {
	      if(arr1[j]<=arr1[i])
	      {
		temp=arr1[i];
		arr1[i]=arr1[j];
		arr1[j]=temp;
	      }
	    }
	}
	printf("The first array elements after sorting: \n");
	for(i=0; i<5; i++)
	{
	   printf("%d ",arr1[i]);
	}
	printf("\n");
	for(i=0; i<4; i++)
	{
	   for(j=i+1; j<4; j++)
	   {
	      if(arr2[j]<=arr2[i])
	      {
	        temp=arr2[i];
	        arr2[i]=arr2[j];
	        arr2[j]=temp;
	      }
	    }
	}
	printf("The second array elements after sorting: \n");
	for(i=0; i<4; i++)
	{
	   printf("%d ",arr2[i]);
	}
	printf("\n");
	i=0;
	j=0;
	while(k<9)
	{
	   if(arr1[i]<=arr2[j])
	   {
		merge[k]=arr1[i];
	        merge[k++]=arr2[j];
	        i++;
		j++;
	        k++;
	   }
	   else
	   {
		merge[k]=arr2[j];
		merge[k++]=arr1[i];
		i++;
		j++;
		k++;
	   }
	}
	printf("Array elements after merge: \n");
	for(i=0; i<9; i++)
	{
	   printf("%d ",merge[i]);
	}
	printf("\n");
	return 0;
}
