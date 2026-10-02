#include<stdio.h>
#define SIZE 6
#define T_SIZE 7
struct Entry
{
    int key;
    int frequency;
    int occupied;
};
void insert(struct Entry table[], int key);
int hash(int key);
int get_frequency(struct Entry table[], int key);
int main()
{
    struct Entry table[T_SIZE]={0};
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i=0; i<SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<SIZE; i++)
    {
        insert(table, arr[i]);
    }
    for(int i=0; i<SIZE; i++)
    {
        int freq=get_frequency(table, arr[i]);
        if(freq==1)
        {
            printf("%d is the first non repeating element in an array\n", arr[i]);
            return 0;
        }
    }
    printf("There is no non repeating element in an array\n");
    return 0;
}
void insert(struct Entry table[], int key)
{
    int index=hash(key);
    while(table[index].occupied)
    {
        if(table[index].key == key)
        {
            table[index].frequency++;
            return;
        }
        index=(index+1)%T_SIZE;
    }
    table[index].key=key;
    table[index].frequency=1;
    table[index].occupied=1;
    return;
}
int hash(int key)
{
    if(key < 0)
        key = -key;
    return key%T_SIZE;
}
int get_frequency(struct Entry table[], int key)
{
    int index=hash(key);
    while(table[index].occupied)
    {
        if(table[index].key == key)
        {
            return table[index].frequency;
        }
        index=(index+1)%T_SIZE;
    }
    return 0;
}
