#include<stdio.h>
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    int count=0;
    int i=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The length of the string is %d\n",count);
    return 0;
}
