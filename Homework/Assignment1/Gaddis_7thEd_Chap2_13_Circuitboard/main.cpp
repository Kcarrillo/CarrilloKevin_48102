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
char PERCENT=100;
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float perprof=4e-1f;      //Percent of Profit on Circuit board
    float itmcost=12.67f;     //Cost of item
    float profit;             //Profit made on item
    float total;              //Total of item and profit
    
    //Input values
    
    //Process values -> Map inputs to Outputs
    profit=itmcost*perprof;
    total=profit+itmcost;        
            
    //Display Output
    cout<<"Profit of item is $ "<<profit<<endl;
    cout<<"Total cost is $ "<<total<<endl; 
    //Exit Program
    return 0; 
}
