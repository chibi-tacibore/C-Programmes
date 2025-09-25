/*
Name: James Nyangi Marwa
Reg: PA106/G/29045/25
Description:program to find the surface area and volume of a cylinder
*/
#include<stdio.h>

//main function
int main() {
    //variable declaration
    float volume,surface_area,r,h;
    float pi = 3.142;
    //prompt user to enter radius
     printf("enter r:");
     scanf("%f",&r);
    
    //prompt user to enter height
      printf("enter h:");
      scanf("%f",&h);
    
    //calculate volume
    volume = pi*r*r*h;
    
    //calculate surface_area
     surface_area = 2*pi*r*r + 2*pi*r*h;
        
    //display volume
     printf("volume is %f \n",volume);
    
    //display surface_area
     printf("surface_area is %f \n",surface_area);
    
    return 0;
}