#include<stdio.h>
enum device_state
{
        DEVICE_OFF,
        DEVICE_ON,
        DEVICE_FAULT
};
struct device
{
        int device_id;
        enum device_state state;
};
void data(struct device d);
int main()
{
        struct device d;
        printf("Enter Device ID: ");
        scanf("%d",&d.device_id);
        int temp;
        printf("Enter Device State [0,1,2]: ");
        scanf("%d",&temp);
        if(temp >= 0 && temp <= 2)
        {
            d.state=(enum device_state)temp;
        }
        else{
            printf("Invalid state\n");
            return 0;
        }
        data(d);
        return 0;
}
void data(struct device d)
{
        switch(d.state)
        {
             case DEVICE_OFF:
                printf("%d : OFF\n",d.device_id);
                break;
             case DEVICE_ON:
                printf("%d : ON\n",d.device_id);
                break;
             case DEVICE_FAULT:
                printf("%d : Fault\n",d.device_id);
                break;
             default:
                printf("Invalid state\n");
        }
}
