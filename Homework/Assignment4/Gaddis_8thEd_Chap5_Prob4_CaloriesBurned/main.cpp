/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  To calculate the calories burned
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
      //Minutes on treadmill
    float calburn=3.6;  //calories burned
    int min;
    float cal;
    //Input or initialize values Here
    
    //Process/Calculations Here
    while (min==30){
        cal=((min/5)*calburn);
    
    break;  
    }
    //Output Located Here
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Calories burned "<<cal<<endl;

    //Exit
    return 0;
}

