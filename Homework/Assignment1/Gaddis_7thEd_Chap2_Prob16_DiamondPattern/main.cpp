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

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables   
    char s=' ';         //Character s is a space
    char x;             //Character x is character
    //Input values
    cout<<"What character would you like to use to make a Diamond, input\n";
    cin>>x;
    //Process values -> Map inputs to Outputs
    
            
    //Display Output
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    cout<<s<<s<<x<<x<<x<<s<<s<<endl;
    cout<<s<<x<<x<<x<<x<<x<<s<<endl;
    cout<<x<<x<<x<<x<<x<<x<<x<<endl;
    cout<<s<<x<<x<<x<<x<<x<<s<<endl;
    cout<<s<<s<<x<<x<<x<<s<<s<<endl;
    cout<<s<<s<<s<<x<<s<<s<<s<<endl;
    //Exit Program
    return 0; 
}
