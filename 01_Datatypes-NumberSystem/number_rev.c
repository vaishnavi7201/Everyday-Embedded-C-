#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);
    int rev=0, mod=0;
    if(N<0)
    {
        printf("Invalid input!\n");
        return 0;
    }
    else{
        if(N==0)
        rev=0;
        while(N>0)
        {
            mod=N%10;
            rev=rev*10+mod;
            N=N/10;
        }
    }
    printf("Reversed number is %d\n",rev);
    return 0;
}
