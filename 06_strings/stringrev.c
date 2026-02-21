#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    int k=strlen(str);
    int i=0, j=k-1;
    char temp;
    for(i=0; i<k/2; i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }
    printf("The reversed string is %s\n",str);
    return 0;
}
