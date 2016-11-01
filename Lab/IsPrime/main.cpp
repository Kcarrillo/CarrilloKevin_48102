/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on November 1, 2016, 9:07 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool isPrime(int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int count=0;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    for (int i=100;i<=1000;i++){
        if(isPrime(i)){
            cout<<i<<" ";    
            count++;
            if(count==10){
               cout<<endl; 
               count=0;
            }
        }
    }
    
    //Exit
    return 0;
}
bool isPrime(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0)return false;
} return true;
}

