/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 20, 2016, 3:14 AM
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
    char a=' ';//Character used to create space
    char v='*';//Border Character
    char c;    //Character used to create C
    char s;    //Character used to create S
    char l;    //Character L used to create exclamamtion
    
    //Input values
    cout<<"What characters would you like to use to make the CS, input\n";
    cin>>c;
    cin>>s;
    cin>>l;
    
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;
    cout<<v<<v<<c<<c<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<v<<c<<v<<v<<c<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<c<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<c<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<endl;
    cout<<c<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<c<<a<<a<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<c<<a<<a<<a<<a<<a<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<a<<c<<a<<a<<c<<a<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<a<<a<<c<<c<<a<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<a<<a<<a<<a<<a<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a;
    cout<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v<<v;
    //Exit Program
    return 0;
}