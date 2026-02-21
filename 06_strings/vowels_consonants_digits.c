#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("Enter the string: ");
    scanf(" %49[^\n]",str);
    int v=0, c=0, d=0;
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
	if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
           v++;
        }
	else if(str[i] == 'B' || str[i] == 'C' || str[i] == 'D' || str[i] == 'F' || str[i] == 'G' || str[i] == 'H' || str[i] == 'J' || str[i] == 'K' || str[i] == 'L' || str[i] == 'M' || str[i] == 'N' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S' || str[i] == 'T' || str[i] == 'V' || str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z' || str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h' || str[i] == 'j' || str[i] == 'k' || str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' || str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z')
	{
           c++;
	}
	else if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
	{
	  d++;
        }
	else
	{
	}
     }
     printf("Number of vowels: %d\n",v);
     printf("Number of consonants: %d\n",c);
     printf("Number of digits: %d\n",d);
     return 0;
}
     
