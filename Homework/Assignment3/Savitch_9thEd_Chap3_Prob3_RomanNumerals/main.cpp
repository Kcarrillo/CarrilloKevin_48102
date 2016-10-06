/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on October 1, 2016, 3:55 PM
 * Purpose:  Convert a number to Roman Numerals
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short x;                   //Number to convert
    unsigned char n1000s,n100s,n10s,n1s;//Strip off the digits
    
    //Input Data
    cout<<"Input a number from 1000 to 3000 to convert "<<endl;
    cout<<"to a Roman Numeral"<<endl;
    cin>>x;
    
    //Process the Data
    if(x<1000||x>3000)return 1;
    
    //Output the processed Data
    
    //Thousand Position
    n1000s=(x-x%1000)/1000;
    switch(n1000s){
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
 
    //Hundreds Position
    x-=n1000s*1000;
    n100s=(x-x%100)/100;
    switch(n100s){
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    
    //Tens Position
    x-=n100s*100;
    n10s=(x-x%10)/10;
    switch(n10s){
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
    
    //Tens Position
    x-=n10s*10;
    n1s=(x-x%1)/1;
    switch(n1s){
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"I";
        case 2:cout<<"I";
        case 1:cout<<"I";
    }
    
    return 0;
}