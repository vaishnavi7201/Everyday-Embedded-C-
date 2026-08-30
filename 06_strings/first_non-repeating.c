#include<stdio.h>
int main()
{ 
   char str[50]; 
   printf("Enter the string: "); 
   scanf(" %49[^\n]",str); 
   int count, found=0; 
   for(int i=0; str[i]!='\0'; i++)
   { 
       count=0; 
       for(int j=0; str[j]!='\0'; j++) 
       { 
           if(j==i) continue; 
           if(str[i]==str[j]) 
           { 
               count=1; 
               break; 
           } 
        } 
        if(count==0) 
        { 
           printf("The first non repeating character is %c\n",str[i]); 
           found=1; 
           break; 
        } 
   } 
   if(found==0) 
   { 
       printf("There is no non repeating character\n"); 
   } 
   return 0; 
}
