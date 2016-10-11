/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on September 20, 2016, 12:07 AM
 * Purpose:  Use trigonometric Functions
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PI=4*atan(1.0);//Pi
const float CNVDEGR=PI/180;//Conversion Degrees to radians

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg,radians;
    
    //Input or initialize values Here
    deg=5;
    radians=deg*CNVDEGR;
    
    //Output Located Here
    cout<<"[ Degrees, Radians,    Sine,  Cosine, Tangent]"<<endl;
    cout<<fixed<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
     
     //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
      //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
  cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
     //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
        //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
            //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
     //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
     //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
     //Input or initialize values Here
    deg+=5;
    radians=deg*CNVDEGR;
    //Output Located Here
    cout<<fixed<<setprecision(5);
     cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians<<","
            <<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)<<","
            <<setw(8)<<tan(radians)<<"]"<<endl;
         //Input or initialize values Here
   
    
    
    
   
   
            //Exit
    return 0;
}

