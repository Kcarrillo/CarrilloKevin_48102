/* 
 * File:   main.cpp
 * Author: Kevin Carrillo
 * Created on September 13, 2016, 11:52 AM
 * Purpose:  To Calculate when homeowners in Riverside will have Beach front property.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float CNVMMFT= 304.8f;//Conversion millimeters to feet from google
const float CNVMMM=1000.0f;//Conversion from millimeters to meters 
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float rate=1.5f;     //Sea  level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10;    //Years to calculate rise
    float rise1,rise2,rise3;//Solutions for the 3 years above
    int nYrBch;// Number of years before home is beach front 
    float elevRiv=860.0f;  //Elevation of Riverside in Feet from wiki
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;
    
            
            
    //Output Located Here
    cout<<"The rate of sea level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<"mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<"mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<"mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<" years.";
    
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;
    
     //Exit
    return 0;
}



