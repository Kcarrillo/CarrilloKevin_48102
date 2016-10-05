/* 
   File:   main
   Author: Kevin Carrillo
   Created on October 4th, 2016, 12:00 PM
   Purpose:  To calculate how many points a person earns from books purchased
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
   short book;   //Number of books 
   unsigned short points;
    //Input values
   cout<<"Number of books purchased ";
   cin>>book;
   
    //Process values -> Map inputs to Outputs
    points=(book=0)?"0":
           (book=1)?"5":
           (book=2)?"15":    
           (book=3)?"30":
           (book=4)?"60":"60";
    //Display Output
    cout<<"Books Purchased= "<<book<<", Points earned= "<<points<<endl;
    //Exit Program
    return 0;
}