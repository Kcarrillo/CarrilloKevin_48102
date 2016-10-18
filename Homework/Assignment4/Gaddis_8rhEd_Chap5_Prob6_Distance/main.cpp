/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 15, 2016, 5:26 PM
 * Purpose : Determine distance traveled
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float dist, speed;    //Distance, speed of the train (in miles and mpr respectively)
    int hour;            //Number of hours traveled
    
    //Input values
    cout << "What is the speed of the train?" << endl;
    cin >> speed;
    cout << "How hour many hours did the train tavel?" << endl;
    cin >> hour;
    
    //Process values and display output
     cout << "-----------------------------" << endl;
    for(int i=1;i<=hour;i++){
        dist = speed * i;
        cout << "Hour : " << i << setw(10) << dist << " mi" << endl;
    }

    //Exit Program
    return 0;
}