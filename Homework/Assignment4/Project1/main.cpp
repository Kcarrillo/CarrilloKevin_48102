/* 
 * File:   main.cpp
 * Author:Kevin Carrillo
 * Created on October 11, 2016, 9:07 AM
 * Purpose:  Menu without Functions
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>      //Random num Generator
#include <ctime>        //time
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float GRAVITY=6.673e-8f;       //Universal Gravity Constant cm^3/gram/sec^2
float CNKGGRM=1000.0f;         //Conversion from Kilograms to Grams
float CNSGGRM=14593.9f;        //Conversion from SLugs to Grams
float CNKMMET=1000.0f;         //Conversion from Kilometers to Meters
float CNMETCM=100.0f;          //Conversion from Meters to Centimeters
float CNDYNLB=2.24809e-6f;     //Conversion from Dynes to Pounds
float CNSGLBS=32.174f;         //Conversion from Slugs to Pounds [acceleration of gravity in ft/sec/sec]


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Savitch 9thEd Chap4 Prob7 WeighIn"<<endl;
        cout<<"2.  Type 2  for Savitch_9thEd_Chap3_RockPaperScissors"<<endl;
        cout<<"3.  Type 3  for Problem C"<<endl;
        cout<<"4.  Type 4  for Problem D"<<endl;
        cout<<"5.  Type 5  for Problem E"<<endl;
        cout<<"6.  Type 6  for Problem F"<<endl;
        cout<<"7.  Type 7  for Problem G"<<endl;
        cout<<"8.  Type 8  for Problem H"<<endl;
        cout<<"9.  Type 9  for Problem I"<<endl;
        cout<<"10. Type 10 for Problem J"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem A"<<endl;
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
                break;          
            }
            case 2:{
                cout<<"Inside Problem B"<<endl;
               srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables 
    char computr;   //Computers choice
    char rPlay;     //Our choice: Rock/Paper/Scissors
    
    //Input Computer values 
    computr=rand()%4+80;
    while (computr=='Q'){
        computr=rand()%4+80;
    }
    
    //Input our R/P/S
    cout<<"Input your choice R-Rock, P-Paper, S-Scissors"<<endl;
    cin>>rPlay;
    switch(rPlay){
        case'r':
        case'R':rPlay='R';break;
        case's':
        case'S':rPlay='S';break;
        default: rPlay='P';break;
    }        
    
    //Output 
    cout<<"The computer Generates a "<<computr<<endl;
    cout<<"The Player typed in a  "<<rPlay<<endl;
    
    //Determine the winner and display
    if(computr==rPlay){
        cout<<"Game ends in Draw "<<endl;
    }else if(computr=='P'){
        if(rPlay=='S')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if(computr=='S'){
        if(rPlay=='R')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }else if(computr=='R'){
        if(rPlay=='P')cout<<"The player wins"<<endl;
        else cout<<"The computer wins"<<endl;
    }
                break;
            }
            case 3:{
                cout<<"Inside Problem C"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 4:{
                cout<<"Inside Problem D"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 5:{
                cout<<"Inside Problem E"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 6:{
                cout<<"Inside Problem F"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 7:{
                cout<<"Inside Problem G"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 8:{
                cout<<"Inside Problem H"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 9:{
                cout<<"Inside Problem I"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }
            case 10:{
                cout<<"Inside Problem J"<<endl;
                //Input values
                //Process values -> Map inputs to Outputs 
                //Display Output
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}
