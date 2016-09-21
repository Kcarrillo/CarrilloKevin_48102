/* 
   File:   main
   Author: Kevin Carrillo
   Created on September 13th, 2016, 10:28 AM
   Purpose:  Calculate the distance dropped in free fall.
            for both feet and meters with number of decimal places.
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Math Library
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float GRAVITY=32.174;//Acceleration in ft/sec^2
const float CNVMFT=3.28084;//Conversion from meters to feet

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float time;   //Time as input in seconds
    float dftFell;//Distance in free fall feet
    float dmtFell;//Distance in free fall meters
    int   places; //Places to round the answer
    
    //Input values
    cout<<"This problem determines distance dropped in free-fall"<<endl;
    cout<<"Input the time in free fall, units of seconds"<<endl;
    cin>>time;
    cout<<"How many decimal places to round the result"<<endl;
    cin>>places;
    
    //Process values -> Map inputs to Outputs
    dftFell=GRAVITY*time*time/2;
    dmtFell=dftFell/CNVMFT;
    //float shift=pow(10,places);//Number of places to shift answer
    float shift=exp(places*log(10));//Number of places to shift answer
    int round1=dftFell*shift+0.5;//Round to nearest 10^places
    dftFell=round1/shift;//Then shift result back
    round1=dmtFell*shift+0.5;//Do same for meters
    dmtFell=round1/shift;
    
    //Display Output
    cout<<"Gravity = "<<GRAVITY<<" ft/sec^2"<<endl;
    cout<<"Time fallen = "<<time<<" seconds"<<endl;
    cout<<"Distance traveled = "<<dftFell<<" ft"<<endl;
    cout<<"Distance traveled = "<<dmtFell<<" m"<<endl;

    //Exit Program
    return 0;
}