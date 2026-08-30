#include<stdio.h> 
#include<string.h> 
void rearrange(char *start, char *end); 
int main() 
{ 
   char str[100]; 
   printf("Enter the string: "); 
   scanf(" %99[^\n]",str); 
   char *start=str; 
   char *end=(str+strlen(str))-1; 
   char swap; 
   while(start<end) 
   { 
       swap=*start; 
       *start=*end; 
       *end=swap; 
       start++; 
       end--; 
    } 
    start=str; 
    end=start; 
    rearrange(start, end); 
    printf("%s\n",str); 
    return 0; 
} 
void rearrange(char *start, char *end) 
{ 
    char *nptr=start; 
    char swap; 
    while(*nptr!='\0') 
    { 
       while(*end!=' ' && *end!='\0') 
       { 
           end++; 
       } 
       nptr=end; 
       end=end-1; 
       while(start<end) 
       { 
           swap=*start; 
           *start=*end; 
           *end=swap; 
           start++; 
           end--; 
       } 
       if(*nptr!='\0') 
       { 
           start=nptr+1; 
           end=start; 
       } 
    } 
}

