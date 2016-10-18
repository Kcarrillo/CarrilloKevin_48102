/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 14, 2016, 6:26 PM
 * Purpose : Calculate the income salary after incremental peny pay
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
    float dollar;          //Number of dollar
    float cents=1.0f;   //Number of cents in the first day
    unsigned int numDays; //Number of payment days
    
    //Input values
    cout << "Input the number of days you worked : " << endl;
    cin >> numDays;
    
   
    //Process values
   dollar = cents/100.0; //Converting cents to dollar
    for (int i=2; i<=numDays; i++){
        cents = cents * 2;
    }
   if (cents>=100) cout<<dollar;
   else if cout<<"The total number of cents : "<<cents;
  
    //Exit Program
   return 0;
}