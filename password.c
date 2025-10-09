/*
Name: James Nyangi Marwa
Reg no: PA106/G/29045/25
Date: 7th october 2025
Description: a program that keeps prompting the user for the password until the correct one is entered.
*/
#include <stdio.h>

int main() {
    // Array to store the password input (4 digits + null terminator)
    char password[5]; 

    // Prompt the user for the password using a do while loop
    do {
        printf("Enter the password: ");
        // Read up to 4 characters to prevent overflow
        scanf("%4s", password); 
    } 
     // Manual comparison
     while (password[0] != '1' || password[1] != '2' || password[2] != '3' || password[3] != '4');

    // Display access granted message
    printf("Access Granted\n"); 
    return 0;
}