/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 9, 2016, 6:29 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char Purch=52;  //Purchase of item in Dollars
    float stattax=4e-2f;  //State tax in percent
    float countax=2e-2f; //County tax
    float tottax;   //Total sales tax
 
    //Input values
    
    //Process values -> Map inputs to Outputs
    tottax=(stattax*Purch)+(countax*Purch);
            
    //Display Output
            cout<<"Total Sales Tax is $"<<tottax<<endl;
    //Exit Program
    return 0;
}