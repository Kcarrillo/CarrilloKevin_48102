/* 
   File:   main
   Author: Kevin Carrillo 
   Created on September 26,2016
   Purpose:  To calculate the gross and net box office profit at a theater
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
    char title[50];
    float gross,net,numAdlt,numchld,dist; //Title of film, gross profit, Net Profit, Number of adult and child tickets sold 
    float costAdt,costChld; //Cost of all adult and children's tickets
     
    //Input values
    cout<<"Title of the Film ";
    cin>>title;
    cout<<"How Many tickets were sold for adults? ";
    cin>>numAdlt;
    cout<<"How Many tickets were sold for children? ";
    cin>>numchld;
    
    //Process values -> Map inputs to Outputs
    costAdt=numAdlt*10;
    costChld=numchld*6;
    gross=costAdt+costChld;
    net=gross*.2;
    dist=gross-net;
    
    //Display Output
    cout<<setprecision(2)<<fixed;
    cout<<"Movie Title:  "<<title<<endl;
    cout<<"Adult tickets sold:  "<<numAdlt<<endl;
    cout<<"Child tickets sold:  "<<numchld<<endl;
    cout<<"Gross Box Office Profit:  "<<gross<<endl;
    cout<<"Net Box Office Profit:  "<<net<<endl;
    cout<<"Amount Paid to distributor:  "<<dist<<endl;
    //Exit Program
    return 0;
}