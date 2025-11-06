/*
Name: James Nyangi Marwa
Reg : PA106/G/29045/25
Date: 6rd November 2025
Description :C program that stores student examination results in a binary file named results.dat. in a university
*/
#include <stdio.h>

// Define a structure to hold student information
struct Student {
    char name[100];
    int registration_number;
    float total_marks;
};

int main() {
    FILE *file;
    struct Student student;

    // Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if the file could not be opened
    }

    // Read and display each student record
    printf("Student Results:\n");
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s, Marks: %.2f\n", student.name, student.total_marks);
    }

    // Close the file
    fclose(file);
    
    return 0;
}