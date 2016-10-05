/* 
   File:   main
   Author: Dr. Mark E. Lehr
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
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
    float sec;  //Time in Seconds
    
    //Input values
    cout<<"The number of Seconds ";
    cin>>sec;
    
    //Process values -> Map inputs to Outputs
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    { if ((sec>=86400)) cout<<"Number of Day(s) "<<sec/86400<<endl;
    else if ((sec>=3600)) cout<<"Number of Hour(s) "<<sec/3600<<endl;
    else if ((sec>=60)) cout<<"Number of Minute(s)"<<sec/60<<endl;
     }
    //Display Output

    //Exit Program
    return 0;
}