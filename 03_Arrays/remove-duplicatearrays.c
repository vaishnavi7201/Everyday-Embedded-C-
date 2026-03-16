#include<stdio.h>
int main()
{
        int n=5;
	int arr[n];
        int i=0, temp=0, j=0, k=0;
        printf("Enter %d elements: ",n);
        for(i=0; i<n; i++)
        {
           scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
           for(j=i+1; j<n; j++)
           {
              if(arr[j]<=arr[i])
              {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
              }
            }
        }
        printf("The array elements after sorting: \n");
        for(i=0; i<n; i++)
        {
           printf("%d ",arr[i]);
        }
	printf("\n");
	for(i=0; i<n; i++)
	{
	   for(j=i+1; j<n; j++)
	   {
		if(arr[i]==arr[j])
	        {
		    for(k=j; k<n; k++)
		    {
			arr[k]=arr[k+1];
		    }
		    n--;
	            j--;
		}
	    }
	}
	printf("Array elements after removing duplicates: \n");
	for(i=0; i<n; i++)
	{
	    printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
