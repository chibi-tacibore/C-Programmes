/*
Name: James Nyangi Marwa
Reg : PA106/G/29045/25
Date: 6rd November 2025
Description :C program that allows the librarian to enter book titles and store each title in a text file named borrowed_books.txt.
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[256];

    // Open the file in append mode
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file could not be opened
    }

    // Prompt the user for a book title
    printf("Enter the book title: ");
    fgets(title, sizeof(title), stdin); // Read a line of input

    // Write the title to the file
    fputs(title, file);
    
    // Close the file
    fclose(file);
    
    // Display a confirmation message
    printf("The title '%s' has been successfully stored.\n", title);

    return 0;
}
