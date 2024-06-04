#include <stdio.h>

int main() {
    float milesDriven, gasolinePrice, milesPerGallon, parkingFees, tolls;

    printf("Enter Total miles driven per day: ");
    scanf("%f", &milesDriven);
    printf("Enter Cost per gallon of gasoline: ");
    scanf("%f", &gasolinePrice);
    printf("Enter Average miles per gallon: ");
    scanf("%f", &milesPerGallon);
    printf("Enter Parking fees per day: ");
    scanf("%f", &parkingFees);
    printf("Enter Tolls per day: ");
    scanf("%f", &tolls);

    float totalCost = ((milesDriven / milesPerGallon) * gasolinePrice) + parkingFees + tolls;
    printf("Transportation Cost Per Day is %.2f", totalCost);
}