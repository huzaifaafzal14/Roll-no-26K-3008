#include<stdio.h>
int main()
{
    float test,fsc,aggregate;
    printf("Enter your Entry test score (out of 100) and your Fsc percentage:\n",test,fsc);
    scanf("%f %f",&test, &fsc);
    aggregate=(test*0.5)+(fsc*0.5);
    printf("Your aggregate score is: %f\n",aggregate);
    if(aggregate>=80)
    {
        printf("Congratulations! You are eligible for Computer Science program.\n");
    }
    else if (aggregate>=65&& aggregate<80)
    {
        printf("Congratulations! You are eligible for Software Engineering program.\n");
    }
    else if (aggregate>50 && aggregate<65)
    {
        printf("Congratulations! You are eligible for Information Technology program.\n");
    }
    else
    {
        printf("You are not eligible for any program.\n");
    }

}