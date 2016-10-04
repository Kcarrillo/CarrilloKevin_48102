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
    short a,b,c,d;   //Characters for Num 1&2
    
    //Input values
    cout<<"Input Three Numbers ";
    cin>>a>>b>>c>>d;
    
    //Process values -> Map inputs to Outputs
    cout<<"From Smallest to Greatest "<<endl;
        //A Block
    {if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d>b)&&(d>c)) cout<<a<<","<<b<<","<<c<<","<<d<<endl;
    else if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d>b)&&(d<c)) cout<<a<<","<<b<<","<<d<<","<<c<<endl;
    else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d<b)&&(d>c)) cout<<a<<","<<c<<","<<d<<","<<b<<endl;
    else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d>b)&&(d>c)) cout<<a<<","<<c<<","<<b<<","<<d<<endl;
    else if ((a<b)&&(a<c)&&(b<c)&&(a<d)&&(d<b)&&(d<c)) cout<<a<<","<<d<<","<<b<<","<<c<<endl;
    else if ((a<b)&&(a<c)&&(b>c)&&(a<d)&&(d<b)&&(d<c)) cout<<a<<","<<d<<","<<c<<","<<b<<endl;

    }
 
    
    
    
    
    //Display Output

    //Exit Program
    return 0;
}