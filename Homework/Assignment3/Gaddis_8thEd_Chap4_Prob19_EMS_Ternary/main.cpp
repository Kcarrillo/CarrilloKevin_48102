/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on September 29, 2016, 12:07 PM
 * Purpose:  To determine the Band of radiation 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float waveLen;
    
    //Input or initialize values Here
    cout<<"What is the wavelength of radiation in Meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    //Process/Calculations Here
    cout<<((waveLen>=1e-2f)?"Radio Band":
           (waveLen>=1e-3f)?"Microwave Wave Band":
           (waveLen>=7e-7f)?"Infra-Red Band":
           (waveLen>=4e-7f)?"Visible Band":
           (waveLen>=1e-8f)?"Ultra-Violet Band":
           (waveLen>=1e-11f)?"X-Ray Band":
           "Gamma-Ray Band")<<endl;
    
    //Output Located Here
    


    //Exit
    return 0;
}

