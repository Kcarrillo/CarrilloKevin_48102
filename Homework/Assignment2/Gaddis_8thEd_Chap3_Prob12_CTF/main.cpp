/* 
   File:   main
   Author: Kevin Carrillo 
   Created on September 27, 2016
   Purpose:  To convert Celsius to Fahrenheit 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float celsius,frnheit;  //Celsius and Fahrenheit
    
    //Input values
    cout<<"Input degrees in Celsius ";
    cin>>celsius;
    //Process values -> Map inputs to Outputs
    frnheit=9*celsius/5+32;
    //Display Output
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"From Celsius the degrees in Fahrenheit is "<<frnheit<<" F"<<endl;
    //Exit Program
    return 0;
}