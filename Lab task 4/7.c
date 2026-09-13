#include <stdio.h>

int main() {
    int zoneType;
    float speed, speedLimit, fine = 0;

    printf("Enter Zone Type (1 = School Zone, 2 = Highway, 3 = Residential Area): ");
    scanf("%d", &zoneType);

    printf("Enter Driver's Speed (km/h): ");
    scanf("%f", &speed);

    switch (zoneType) {
        case 1: // School Zone
            speedLimit = 30;
            printf("\nZone Type: School Zone (Limit: 30 km/h)\n");
            break;

        case 2: // Highway
            speedLimit = 100;
            printf("\nZone Type: Highway (Limit: 100 km/h)\n");
            break;

        case 3: // Residential Area
            speedLimit = 50;
            printf("\nZone Type: Residential Area (Limit: 50 km/h)\n");
            break;

        default:
            printf("\nInvalid zone type entered.\n");
            return 0;
    }

    if (speed <= speedLimit) {
        printf("Speed: %.2f km/h\n", speed);
        printf("No violation. Fine: Rs. 0\n");
    }
    else if (speed > speedLimit && speed <= speedLimit + 20) {
        fine = 1000;
        printf("Speed: %.2f km/h\n", speed);
        printf("Violation detected. Fine: Rs. %.2f\n", fine);
    }
    else if (speed > speedLimit + 20) {
        fine = 1000 * 2;
        printf("Speed: %.2f km/h\n", speed);
        printf("Severe violation (exceeds limit by more than 20 km/h). Fine: Rs. %.2f\n", fine);
    }

    return 0;
}