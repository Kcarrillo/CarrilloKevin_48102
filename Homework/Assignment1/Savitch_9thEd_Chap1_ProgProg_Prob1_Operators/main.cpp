/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 13th, 2016, 10:45 AM
   Purpose:  Add,Sub,Mult,Div,Mod
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
    int op1,op2;
    
    //Input values
    cout<<"Input 2 integer values to Add,Sub,Mult,Div,Mod"<<endl;
    cin>>op1>>op2;
    
    //Display Output
    cout<<op1+op2<<"="<<op1<<"+"<<op2<<endl;
    cout<<op1-op2<<"="<<op1<<"-"<<op2<<endl;
    cout<<op1*op2<<"="<<op1<<"*"<<op2<<endl;
    cout<<op1/op2<<"="<<op1<<"/"<<op2<<endl;
    cout<<op1%op2<<"="<<op1<<"%"<<op2<<endl;

    //Exit Program
    return 0;
}
