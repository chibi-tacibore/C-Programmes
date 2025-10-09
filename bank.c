/*
Name: James Nyangi Marwa
Reg no: PA106/G/29045/25
Date: 7th october 2025
Description: a program using a while loop where the user enters the amount to withdraw until the balance becomes zero or negative
*/
#include <stdio.h>

int main() {
    // Starting balance
    double balance = 1000.0; 
    double withdrawal;

    printf("Initial balance: KSH%.2f\n", balance);

    while (balance > 0) {
        printf("Enter the amount to withdraw: KSH");
        scanf("%lf", &withdrawal);

        if (withdrawal <= 0) {
            printf("Please enter a positive amount to withdraw.\n");
            continue;
        }
        
        if (withdrawal > balance) {
            printf("Insufficient funds. You can only withdraw up to KSH%.2f.\n", balance);
        } else {
            balance -= withdrawal;
            printf("Withdrawal successful. New balance: KSH%.2f\n", balance);
        }
    }

    printf("Your balance is now zero or negative. Exiting...\n");
    return 0;
}