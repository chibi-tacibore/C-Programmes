/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Date: 22nd october 2025
Description: C function named calculateFare() that takes the distance traveled (in kilometers) as input and returns the total fare.
*/
#include <stdio.h>

// Function to calculate the fare based on distance traveled
float calculateFare(float distance) {
    const float fareRate = 50.0; // KSh. 50 per kilometer
    return distance * fareRate; // Return the total fare
}

// Function to get the distance traveled from the user
float getDistanceTraveled() {
    float distance;
    printf("Enter the distance traveled in kilometers: ");
    scanf("%f", &distance);
    return distance; // Return the entered distance
}

// Function to display the total fare
void displayFare(float totalFare) {
    printf("Total Fare: KSh. %.2f\n", totalFare);
}

int main() {
    float distance = getDistanceTraveled(); // Get user input for distance
    float totalFare = calculateFare(distance); // Calculate the fare based on distance
    displayFare(totalFare); // Display the total fare

    return 0;
}