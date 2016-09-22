/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 22, 2016, 11:41 AM
   Purpose:  To calculate a worker's gross pay
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
    float payrte=16.78f;    //Pay per hour, first 40 hours.
    float ssctax=6e-2;      //Social Security Tax
    float fedtax=1.4e-1;    //Federal income Tax
    float stTax=5e-2;       //State income Tax
    char utax=10;           //Union tax per week
    char depend=35;         //$35 tax for more than 2 dependants 
    char numdep;            //Number of dependants
    float overtime,totgros,takehme; //Total overtime hours, gross pay, and take home pay
    char hrwork;            //Amount of hours worked 
    //Input values
    cout<<"Input the number of hours worked, and the number of Dependants"<<endl;
    cin>>hrwork>>numdep;
    
    
    
   
            
    //Process values -> Map inputs to Outputs
    takehme=totgros-(totgros*ssctax)-(totgros*fedtax)-(totgros*stTax)-utax;
    
    totgros=payrte*hrwork;
    
    
    
    {
    if (hrwork > 40) totgros = payrte * 40 + 1.5 * payrte * (hrwork - 40);
    else totgros = payrte * hrwork; 
    }
    {
    if (numdep <= 3)  cout<<"No additional charge for dependants";
    else cout<<"Charge for dependants "<<depend<<endl;  
    }
    
    //Display Output

    //Exit Program
    return 0;
}

