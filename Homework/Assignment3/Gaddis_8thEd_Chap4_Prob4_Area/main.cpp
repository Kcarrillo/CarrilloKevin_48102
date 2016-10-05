/* 
   File:   main
   Author: Kevin Carrillo
   Created on October 4th, 2016, 12:00 PM
   Purpose:  To calculate area of 2 rectangles and sort the two areas
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    short lenA,lenB;    //Length of the 2 rectangles 
    short widA,widB;    //Width of the 2 rectangles
    short areaA,areaB;  //Area of the2 rectangles
    
    //Input values
    cout<<"Input the length and Width of the first Rectangle ";
    cin>>lenA>>widA;
    cout<<"Input the length and width of the second Rectangle ";
    cin>>lenB>>widB;
    
    //Process values -> Map inputs to Outputs
    areaA=lenA*widA;
    areaB=lenB*widB;
    
    {if ((areaA>areaB)) cout<<"Area of the First Rectangle is greater "<<areaA<<">"<<areaB;
    else if ((areaA<areaB)) cout<<"Area of the Second Rectangle is greater "<<areaB<<">"<<areaA;
    else cout<<"The area of both Rectangles are equal "<<areaA<<"="<<areaB<<endl;
    }     
    //Display Output
    
    //Exit Program
    return 0;
}