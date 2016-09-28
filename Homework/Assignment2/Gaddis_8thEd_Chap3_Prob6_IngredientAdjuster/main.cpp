/* 
   File:   main
   Author: Kevin Carrillo 
   Created on September 25, 2016    
   Purpose:     To adjust the amount of ingredients for a new recipe 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>  //Formatting
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float sugar,butter,flour,totCk;
    
    //Input values
    cout<<"How many cookies do you want to bake? "<<endl;
    cin>>totCk;
    
    //Process values -> Map inputs to Outputs
    sugar=.03125*totCk;
    butter= .02084*totCk;
    flour=.05729*totCk;
    
    //Display Output
    cout<<setprecision(2)<<fixed;
    cout<<"You will Need"<<endl;
    cout<<sugar<<" Cups of Sugar"<<endl;
    cout<<butter<<" Cups of Butter"<<endl;
    cout<<flour<<" Cups of Flour"<<endl;
    //Exit Program
    return 0;
}