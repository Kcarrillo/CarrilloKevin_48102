/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 06, 2016, 9:07 AM
 * Purpose:  Calculate your weight 
 */

//System Libraries 
#include <iostream>
using namespace std;

//User Libraries 

//Global Constants Only
float GRAVITY=6.673e-8f;       //Universal Gravity Constant cm^3/gram/sec^2
float CNKGGRM=1000.0f;         //Conversion from Kilograms to Grams
float CNSGGRM=14593.9f;        //Conversion from SLugs to Grams
float CNKMMET=1000.0f;         //Conversion from Kilometers to Meters
float CNMETCM=100.0f;          //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;     //Conversion from Dynes to Pounds
float CNSGLBS=32.174f;         //Conversion from Slugs to Pounds [acceleration of gravity in ft/sec/sec]
//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables 
    float msEarth=5.972e24f;    //Google lookup -> Kilograms
    float msMark=6.0f;          //Mass of Mark -> Slug
    float rEarth=6371.0f;       //Google radius of the Earth -> Kilometers
    float weight;               //Force of traction from physics
    
    //Conversion of Inputs
    msEarth*=CNKGGRM;       //Convert Mass of Earth to Grams
    msMark*=CNSGGRM;        //Convert Mass of Mark to Grams
    rEarth*=CNKMMET*CNMETCM;//Convert the Radius of Earth from Kilometers to Centimeters
    
    //Input or initialize values 
    
    //Process/Calculations 
    weight=GRAVITY*msMark*msEarth/rEarth/rEarth;//Weak force attraction due to gravity
    weight*=CNDYNLB;                            //Convert Dynes to Pounds
    
    //Output 
    cout<<"According to the Weak Force of Gravity, Mark Weighs = "<<weight<<" lbs"<<endl;
    cout<<"As a check Mark weighs = "<<6*CNSGLBS<<" lbs"<<endl;
    cout<<"The percentage error in the Radius of Earth = +- "<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    
    //Exit
    return 0;
}

