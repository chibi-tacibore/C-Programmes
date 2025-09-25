/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Description: program to prompt user to enter and display their height,ID and bank_balance
*/
#include<stdio.h>

//main function
int main() {
      int height,ID,bank_balance;
    //prompt user to enter height
      printf("enter your height in cm:");
      scanf("%d",&height);
     
     //prompt user to enter their ID
      printf("enter your ID:");
      scanf("%d",&ID);
     
     //prompt user to enter their bank balance
      printf("enter your bank_balance:");
     scanf("%d",&bank_balance);
  
      //output display on user screen
       printf("your height is %d cm \n",height);
       printf("your ID is %d \n",ID);
       printf("your bank_balance is Ksh:%d \n", bank_balance);
      return 0;
}