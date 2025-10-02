/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Description: Program to check if a student is eligible for final exams
*/
#include <stdio.h>

// Main function
int main() {
    // Variable declaration
    int average_marks;
    int attendance;

    // Prompting user to enter average_marks
    printf("Enter average marks: ");
    scanf("%d", &average_marks);
    
    // Prompting user to enter attendance
    printf("Enter attendance(%%): ");
    scanf("%d", &attendance);
    
    // Output to user screen
    if (attendance >= 75 && average_marks >= 40) {
        printf("Eligible for final exams \n", attendance, average_marks); 
    } 
    
    else {
        printf("Not eligible for final exams \n", attendance, average_marks); 
    }

    return 0;
}