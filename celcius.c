/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Date: 22nd october 2025
Description: C function named convertToCelsius() that takes temperature in Fahrenheit as input and returns the temperature in Celsius
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0; // Return the Celsius temperature
}

// Function to get the temperature in Fahrenheit from the user
float getTemperatureInFahrenheit() {
    float fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    return fahrenheit; // Return the entered temperature
}

// Function to display the temperature in Celsius
void displayTemperatureInCelsius(float celsius) {
    printf("Temperature in Celsius: %.2f°C\n", celsius);
}

int main() {
    float fahrenheit = getTemperatureInFahrenheit(); // Get user input for temperature in Fahrenheit
    float celsius = convertToCelsius(fahrenheit); // Convert to Celsius
    displayTemperatureInCelsius(celsius); // Display the temperature in Celsius

    return 0;
}