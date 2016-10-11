/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 06, 2016, 9:07 AM
 * Purpose:  
 */

//System Libraries 
#include <iostream>
#include <cstdlib>      //Random num Generator
#include <ctime>        //time
using namespace std;

//User Libraries 

//Global Constants Only


//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
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
    
    
    //Exit
    return 0;
}

