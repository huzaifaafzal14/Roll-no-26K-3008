#include<stdio.h>
int main()
{
    int accounttype;
    float balance,interest=0;
    printf("Enter your account type (1=saving, 2=current, 3=fixed deposit):\n");
    scanf("%d",&accounttype);
    printf("Enter your account balance:\n");
    scanf("%f",&balance);
    switch(accounttype)
     {
        case 1:
        if(balance>100000)
        {
            interest=balance*0.04;
        }
        else
        {
            interest=balance*0.02;
        }
        printf("Your account type is: saving\n");
        break;
        
        case 2:
        interest=0;
        printf("Your account type is: current\n");
        break;
        
        case 3:
        interest=balance*0.08;
        printf("Your account type is: fixed deposit\n");
        break;
        
        default:
        printf("Invalid account type.\n");
        break;
}
printf("Your account balance is: %.2f\n",balance);
 printf("Your interest amount is: %f\n",interest);
}