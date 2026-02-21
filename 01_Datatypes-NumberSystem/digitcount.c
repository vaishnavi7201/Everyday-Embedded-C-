#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int count=0;
    if(N<0)
    {
        printf("Invalid input!\n");
        return 0;
    }
    else{
        if(N==0)
        count=1;
        while(N>0)
        {
            count++;
            N=N/10;
        }
    }
    printf("Number of digits in a given number is %d\n",count);
    return 0;
}
