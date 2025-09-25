/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Description:program too find out is a customer qualifies for a loan in a bank
*/
#include<stdio.h>

//main function
int main() {
    //variable declaration
    int age;
    double income;
      
    //prompting user to enter values of each variable
        printf("enter your age:");
        scanf("%d",&age);
     
        printf("enter your annual income in sh:");
        scanf("%lf",&income);
    
    //print output to user screen
    if(age >= 21 && income >= 21000) {
    printf("congratulations you qualify for a loan \n",age,income);
}
   
    else{
    printf("unfortunately,we are unable to offer you a loan at this time \n",age ,income);
}
     return 0;
    
}
    
       