/*
Name: James Nyangi Marwa
Reg no: PA106/G/29045/25
Date: 7th october 2025
Description: C program that implements a number guessing game.
*/
#include <stdio.h>

int main() {
    // Fixed secret number for demonstration
    int secretNumber = 7; 
     // Initialize guess
     int guess = 0;
     // Counter for the number of attempts
     int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a secret number between 1 and 20. Try to guess it!\n");

    // Loop until the user guesses the correct number
    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        // Increment the attempt counter with each guess
        attempts++; 

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You've guessed the number in %d attempts!\n", attempts);
        }
    }

    return 0;
}