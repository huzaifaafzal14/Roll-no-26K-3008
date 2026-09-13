#include<stdio.h>
int main()
{
    float heartrate,bodytemp;
    printf("Enter your heart rate and body temperature:\n");
    scanf("%f %f",&heartrate,&bodytemp);
    if(heartrate>120||bodytemp>39)
    {
        printf("Critical condition imediate medical attention required.\n");
    }
    else if(heartrate>=100&&heartrate<=120||bodytemp>=37.5&&bodytemp<=39)
    {
        printf("Urgent condition medical attention required.\n");
    }
    else{
        printf("Normal condition please wait in queue.\n");
    }
    
}