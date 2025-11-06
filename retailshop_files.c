/*
Name: James Nyangi Marwa
Reg : PA106/G/29045/25
Date: 6rd November 2025
Description : C program that p stores daily sales transactions in a file named sales.txt of a small retail shop
*/
#include <stdio.h>

int main() {
    FILE *file;
    float transaction, totalSales = 0.0;

    // Open the sales file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file could not be opened
    }

    // Read each transaction from the file and accumulate the total sales
    while (fscanf(file, "%f", &transaction) == 1) {
        totalSales += transaction; // Add the transaction amount to total sales
    }

    // Close the file
    fclose(file);

    // Display the total sales for the day
    printf("Total sales for the day: %.2f\n", totalSales);

    return 0;
}