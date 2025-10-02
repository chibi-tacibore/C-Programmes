/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Description: program to check total water units consumed and total water bill to be paid by a customer
*/
#include<stdio.h>

//main function
int main() {
    //variable declaration
    int water_units;
    float total_water_bill;
    float amount_per_unit;
   
    //prompting user to enter number of water units consumed
    printf("enter number of water units consumed:");
    scanf("%d",&water_units);
    
    //computing amount of water for units consumed
    if(water_units <= 30) {
        amount_per_unit = 20.0; //for first 30 units
}

    else if(water_units > 30 && water_units <= 60) {
        amount_per_unit = 25.0; // for units between 31 and 60
}

    else {//water units > 60
         amount_per_unit = 30.0; //for units above 60
}
   //computing total water bill
    total_water_bill = water_units * amount_per_unit;

    //output for total water bill
    printf("total water bill: %.2fKES \n", total_water_bill);

  return 0;
}