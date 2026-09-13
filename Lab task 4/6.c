#include<stdio.h>
int main()
{
    int policystatus, vehicleage;
    float claimamount, finalamount, approvedamount;

    printf("Enter your policy status (1=Active, 0=Inactive):\n");
    scanf("%d", &policystatus);

    printf("Enter your vehicle age (in years):\n");
    scanf("%d", &vehicleage);

    printf("Enter your claim amount:\n");
    scanf("%f", &claimamount);

    if (policystatus == 0)
    {
        printf("Claim status: Rejected (Policy is inactive)\n");
    }
    else if (vehicleage > 10 && claimamount <= 500000)
    {
        approvedamount = claimamount;
        printf("Status: Approved\n");
        printf("Approved claim amount: %.2f\n", approvedamount);
    }
    else if (vehicleage < 10 && claimamount > 500000)
    {
        printf("\nClaim Status: Rejected (Claim amount exceeds Rs. 500,000 limit)\n");
    }
    else if (vehicleage >= 10 && vehicleage <= 15)
    {
        approvedamount = claimamount * 0.5;
        printf("\nClaim Status: Partially Approved (Vehicle age 10-15 years)\n");
        printf("Approved Claim Amount: Rs. %.2f (50%% of claim)\n", approvedamount);
    }
    else if (vehicleage > 15)
    {
        printf("Claim status: Rejected");
    }
    else
    {
        printf("Claim status: Rejected");
    }

    return 0;
}