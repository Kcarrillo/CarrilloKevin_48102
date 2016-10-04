/* 
   File:   main
   Author: Kevin Carrillo
   Created on October 1, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short a,b;   //Characters for Num 1&2
    
    //Input values
    cout<<"Input Two Numbers ";
    cin>>a>>b;
    
    //Process values -> Map inputs to Outputs
    if (a<b) cout<<a<<b<<endl;
    else cout<<"From Smallest to Greatest "<<b<<","<<a<<endl;

    //Display Output

    //Exit Program
    return 0;
}