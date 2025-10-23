/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Date: 22nd october 2025
Description:C function called calculateElectricBill() that takes the number of units consumed as input and returns the total bill amount 
*/
#include <stdio.h>

// Function to calculate the electric bill
float calculateElectricBill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10; // KSh. 10 per unit for the first 100 units
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15); // KSh. 10 for first 100 and KSh. 15 for next 100
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20); // KSh. 10 for first 100, KSh. 15 for next 100, KSh. 20 for above 200
    }

    return bill; // Return the total bill amount
}

// Function to get the number of units consumed from user
int getUnitsConsumed() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    return units; // Return the input units
}

// Function to display the total bill
void displayBill(float totalBill) {
    printf("Total Electric Bill: KSh. %.2f\n", totalBill);
}

int main() {
    int units = getUnitsConsumed(); // Get user input
    float totalBill = calculateElectricBill(units); // Calculate the bill
    displayBill(totalBill); // Display the bill

    return 0;
}