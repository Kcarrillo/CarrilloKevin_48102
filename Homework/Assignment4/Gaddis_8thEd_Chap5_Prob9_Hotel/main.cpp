/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 15, 2016, 1:30 PM
 * Purpose: Hotel Occpancy
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int floors;//How many floors
    int rooms;//How many rooms
    int occup_rooms;//How many occupied rooms
    int totrms=0;
    int totocc=0;
    int totempt=0;
    int empty;
    float rmsOcc;
    
    //Get the floors
    cout<<"How many floors does the hotel have? ";
    cin>>floors;
    
    //Display each floor
    for (int floor = 1; floor <= floors; floor++)
    {
        
        //Get a positive floors
        if (floors < 1)
        cout<<"Please enter a bigger number  \n";
        else if (floors==13)
            continue;
        
        //Get the room for each floor
        cout<<"How many rooms on a floor "<<floor<<" ?";
        cin>>rooms;
    
        //Get a positive rooms
        while (rooms < 10)
        {
        cout<<"Please enter a number bigger than 10\n";
        break;
        }
    
        //Get the occupied rooms
        cout<<"How many rooms are occupied on floor "<<floor<<" ?";
        cin>>occup_rooms;
        
        // Calculate the number of total rooms on this floor.
        totrms += rooms;
    
        // Calculate the number of total occupied on this floor.
        totocc += occup_rooms;
    
        // Calculate the number of empty rooms on this floor.
        empty = rooms - occup_rooms;
    
        // Calculate the number of total empty on this floor.
        totempt += empty; 
    }

    cout<<"---------------------------------------\n";
    cout<<"The hotel has "<<totrms<<"total rooms "<<" ."<<endl;
    
    cout<<"The hotel has total occupied rooms "<<totocc<<" ."<<endl;
    
    cout<<"The hotel has a total of "<<totempt<<" unoccupied rooms "<<" ."<<endl;
    
    rmsOcc= static_cast<float>(totocc) / totrms;
    
    cout<<"The percentage of rooms that are occupied is "<< (rmsOcc * 100) <<"%"<<" ."<<endl;
    
    
    
    
    return 0;
}