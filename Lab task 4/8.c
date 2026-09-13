#include <stdio.h>

int main() {
    float bill, discountPercent = 0, finalBill;
    int hour, isMember;

    printf("Enter Bill Amount: ");
    scanf("%f", &bill);

    printf("Enter Hour of Visit (24-hour format): ");
    scanf("%d", &hour);

    printf("Is Member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    
    if (hour >= 15 && hour <= 17) {
        discountPercent = discountPercent + 20;
    }

    if (isMember == 1) {
        discountPercent = discountPercent + 10;
    }

    
    if (discountPercent > 25) {
        discountPercent = 25;
    }

    finalBill = bill - (bill * discountPercent / 100);

    printf("\nBill Amount: Rs. %.2f\n", bill);
    printf("Total Discount Applied: %.2f%%\n", discountPercent);
    printf("Final Payable Bill: Rs. %.2f\n", finalBill);

    return 0;
}