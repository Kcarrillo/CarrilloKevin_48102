/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 20, 2016, 9:41 AM
   Purpose:  
 */

//System Libraries
#include <iomanip>
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int quarters, dimes, nickles, pennies;    
    float money; // amount of money i have    

    //Input Values
    cout << "Enter the number of quarters: ";    
    cin  >> quarters;    
    cout << "Enter the number of dimes: ";    
    cin  >> dimes   ;   
    cout << "Enter the number of nickles: ";    
    cin  >> nickles ;   
    cout << "Enter the number of pennies: ";    
    cin  >> pennies ;      	

    //Display output

  
    money = (quarters * .25) + (dimes * .10) + (nickles * .05) + (pennies * .1);     
    //Display Output	
    cout<<fixed<<setprecision(2)<<showpoint;
    cout << "Quarters: " << quarters << endl;  
    cout << "Dimes: " << dimes << endl; 
    cout << "Nickels: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;
    cout << "You have this amount: "<< money << endl;  
    return 0;
} 