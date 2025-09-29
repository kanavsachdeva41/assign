/*
Problem Statement: Smart Parking Billing System
Scenario: You are working as a junior software developer for a smart city project. The city’s new automated parking lot requires a basic billing software prototype to calculate parking charges for vehicles. The system must handle input of vehicle entry and exit times and then calculate the total amount to be paid.
*/

#include <stdio.h>
void main()
{
    char vehnum[10];

    printf("Enter Vehicle Number: ");
    scanf("%s", &vehnum);

    float enh, enm, exh, exm;

    printf("Enter Entry Time (HH MM): ");
    scanf("%f %f", &enh, &enm);

    printf("Enter Exit Time (HH MM): ");
    scanf("%f %f", &exh, &exm);

    float enh1 = enm / 60, exh1 = exm / 60;
    int enth = enh + enh1, exth = exh + exh1;

    int tdur = exth - enth, amount;

    if (tdur <= 2)
    {
        amount = tdur * 2;
    }
    else
    {
        amount = 10 + (tdur - 2) * 3;
    }

    printf("\n---- Parking Bill ----\n");
    printf("Vehicle Number: %s\n", vehnum);
    printf("Total duration: %d hours\n", tdur);
    printf("Total amount: $%d\n", amount);
}