/* 
   File:   main
   Author: Kevin Carrillo 
   Created on September 22, 2016
   Purpose:  To Calculate how many miles per gallon
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float galGas,fulltank,mpg; //Maximum gallons of gas put in vehicle,How many miles on a full tank,miles per gallon
    
    //Input values
    cout<<"What is the maximum amount of gallons the car can hold?"<<endl;
    cin>>galGas;
    cout<<"How many miles does the vehicle get on a fulltank?"<<endl;
    cin>>fulltank;
    
    //Process values -> Map inputs to Outputs
    mpg=fulltank/galGas;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The miles per gallon is "<<mpg<<endl;
    
    //Exit Program
    return 0;
}