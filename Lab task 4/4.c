#include<stdio.h>
int main()
{
    int people,netweight;
    printf("Enter total number of people and their net weight:\n");
    scanf("%d %d",&people,&netweight);
    if(people<=10&&netweight<=1000)
    {
        printf("The elevator can operate normally.\n");
    }
    else{
        printf("Limit reached the elevator cannot operate normally.\n");
    }
}