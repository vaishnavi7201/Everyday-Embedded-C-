#include<stdio.h>
#include <string.h>
#define SIZE 3
struct book
{
    char title[20];
    float price;
};
int main()
{
    struct book arr[SIZE];
    strcpy(arr[0].title, "Programming");
    arr[0].price=500;
    strcpy(arr[1].title, "Python Pro");
    arr[1].price=400;
    strcpy(arr[2].title, "Positive Attitude");
    arr[2].price=279.5;
    for(int i=0; i<SIZE; i++)
    {
        printf("Book %d Details: \n",i+1);
        printf("Title : %s\n",arr[i].title);
        printf("Price : %.2f\n",arr[i].price);
        printf("\n");
    }
    return 0;
}
