#include<stdio.h>
int main()
{
    int plan,min,extra=0;
    float bill=0;
    printf("Enter your plan (1-4): ");
    scanf("%d", &plan);
    printf("Enter total minutes used: ");
    scanf("%d", &min);
    switch(plan){
    case 1:
    bill=500;
    if(min>1000){
        extra=min-1000;
        bill=bill+(extra*2);
    }
    break;
    case 2:
    bill=800;
    if(min>2000){
        extra=min-2000;
        bill=bill+(extra*2);
        
    }
    break;
    case 3:
    bill:1200;
    break;
    case 4:
    bill= min*1.0;
    break;

}   
printf("Total bill is: Rs %.2f\n",bill);
return 0;

    

}