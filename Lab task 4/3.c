#include <stdio.h>
int main()
{
    int membershiptype,timeslot;
    float fee,finalfee;
    printf("Enter Membership type (1=Student, 2= Regular, 3=Senior citizen):\n");
    scanf("%d",&membershiptype);
    printf("Enter your timeslot (1=Morning, 2=Evening):\n");
    scanf("%d",&timeslot);
    switch(membershiptype){
        case 1:
            fee=2000;
            printf("Your membership type is: Student\n");
            break;
        case 2:
            fee=3500;
            printf("Your membership type is: Regular\n");
            break;
        case 3:
            fee=2500;
            printf("Your membership type is: Senior citizen\n");
            break;
        default:
            printf("Invalid membership type.\n");
    }
    switch(timeslot)
    {
        case 1: //Morning
        finalfee=fee-(fee*0.15);
        printf("Time slot is morning(GET 15 percent discount)\n");
        break;
        case 2: //Evening
        finalfee=fee;
        printf("Time slot is evening(NO discount)\n");
        break;
        default:
            printf("Invalid timeslot.\n");
            break;
    }
    printf("Your initial fee is: %.2f\n",fee);
    printf("Your final fee after discount(if any) is: %.2f\n",finalfee);
}