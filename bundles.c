/*
Name: James Nyangi Marwa
Reg No: PA106/G/29045/25
Description: Program to display data bundles menu and ask user to enter their option
*/    
#include <stdio.h>

// main function
int main() {
    // variable declaration
    int option;
    
    //display selection heading
    printf("select your data bundle:\n");
    
    //display data bundle menu
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");
        
    // prompt user to enter their option
    printf("Enter your option (1-4): ");
    scanf("%d", &option);
    
    // switch statement to handle user input
    switch(option) { 
        case 1:
            printf("You selected 100MB. cost = 50 KES\n");
            break; 
        case 2:
            printf("You selected 500MB. cost = 200 KES\n");
            break; 
        case 3:
            printf("You selected 1GB. cost = 350 KES\n");
            break; 
        case 4:
            printf("You selected 2GB. cost = 600 KES\n");
            break; 
        default:
            printf("Invalid choice\n"); 
            break;
    }

    return 0;
}
