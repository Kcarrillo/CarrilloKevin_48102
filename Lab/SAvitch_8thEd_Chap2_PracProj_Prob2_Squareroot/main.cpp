/* 
 * File:   main.cpp
 * Author: KEvin Carrillo
 * Created on September 20, 2016, 11:24 AM
 * Purpose:  Iteration to find Square Root
 */

//System Libraries Here
#include <iostream>     //Input/Output Objects
#include <iomanip>      //Format Library
#include <cstdlib>      //Random number seed
#include <cmath>        //Square Root Funtion
#include <ctime>        
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float MAXRAND=pow(2,31)-1;//Max signed positive value for int
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    // Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare all Variables Here
    float n,guess,r;
    float scale=90,shift=10;        
    short counter=0;
    
    //Input or initialize values Here - float random number (10,100) vs,
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The intial guess "<<guess<<endl;
   
    //Display the output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"First pass [r,guess] =["<<r<<","<<guess<<"]"<<endl;

    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<" Pass "<<counter<<" [r,guess=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;        
   
    //Second Pass         
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display output
    cout<<" Pass "<<counter<<" [r,guess=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
   
    //Third Pass
     r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display output
    cout<<" Pass "<<counter<<" [r,guess=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fourth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display output
    cout<<" Pass "<<counter<<" [r,guess=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //Fifth Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<" Pass "<<counter<<" [r,guess=["<<setw(7)<<r<<","<<setw(7)<<guess<<"]"<<endl;
    
    //The Answer is
    cout<<"The sqrt ("<<n<<") = "<<sqrt(n)<<endl;
    
    
    //Process/Calculations Here
    
    //Output Located Here
     
   
    //Exit
    return 0;
}

