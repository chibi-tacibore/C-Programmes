/* 
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Date: 29th october 2025
Description: C program to monitor revenue and room occupancy in a hotel
*/
#include <stdio.h>

int main() {
    // Part 1: Weekly Revenue Tracker
    float revenue[7];
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }

    float totalRevenue = 0;
    for (int i = 0; i < 7; i++) {
        totalRevenue += revenue[i];
    }
    printf("Total Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n", totalRevenue / 7);

    // Part 2: Room Occupancy for One Branch
    int occupancy[5][10];
    printf("\nEnter occupancy data for one branch (1 for occupied, 0 for vacant):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("Room [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        int occupied = 0;
        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            }
        }
        printf("Floor %d - Occupied: %d, Vacant: %d\n", i + 1, occupied, 10 - occupied);
    }

    // Part 3: Room Occupancy for Multiple Branches
    int chain[3][5][10];
    printf("\nEnter occupancy data for multiple branches (1 for occupied, 0 for vacant):\n");
    for (int b = 0; b < 3; b++) {
        printf("Branch %d:\n", b + 1);
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 10; j++) {
                printf("Room [%d][%d]: ", i + 1, j + 1);
                scanf("%d", &chain[b][i][j]);
            }
        }
    }

    int totalOccupied = 0;
    for (int b = 0; b < 3; b++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 10; j++) {
                totalOccupied += chain[b][i][j];
            }
        }
    }
    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}
