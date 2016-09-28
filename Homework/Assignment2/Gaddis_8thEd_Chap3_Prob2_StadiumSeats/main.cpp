/* 
   File:   main
   Author: Kevin Carrillo 
   Created on September 23, 2016
   Purpose:  Find number of tickets sold and amount made
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short ticketA,ticketB,ticketC; //Number of A,B,C tickets sold
    float costA,costB,costC;    //Cost of each ticketing area
    float total;    //Total amount made of all tickets
    
    //Input values
    cout<<"How many A tickets were sold?"<<endl;
    cin>>ticketA;
    cout<<"How many B tickets were sold?"<<endl;
    cin>>ticketB;
    cout<<"How many C tickets were sold?"<<endl;
    cin>>ticketC;
    
    //Process values -> Map inputs to Outputs
    costA=15*ticketA; //$15 multiplied by the number of Class A tickets sold
    costB=12*ticketB; //$12 multiplied by the number of Class B tickets sold
    costC=9*ticketC; //$9 multiplied by the number of Class C tickets sold
    total=costA+costB+costC; //Total income of all the tickets
    
    //Display Output
    cout<<"The total income from all ticket sales is $"<<setprecision(2)<<fixed<<total<<endl;
    //Exit Program
    return 0;
}