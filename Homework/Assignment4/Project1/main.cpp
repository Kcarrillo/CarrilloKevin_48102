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
#include <cmath>        //Functions
#include <iomanip>      //Formatting
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
        cout<<"2.  Type 2  for Savitch 9thEd Chap3 RockPaperScissors"<<endl;
        cout<<"3.  Type 3  for Gaddis 8thEd Chap5 Prob4 Calories Burned"<<endl;
        cout<<"4.  Type 4  for Gaddis 7thEd Chap5 Prob20 Guessing Game"<<endl;
        cout<<"5.  Type 5  for Gaddis 8thEd Chap5 Prob6 Distance"<<endl;
        cout<<"6.  Type 6  for Gaddis 8thEd Chap5 Prob9 Hotel Occupancy"<<endl;
        cout<<"7.  Type 7  for Gaddis 8thEd Chap5 Prob7 Penny Pay"<<endl;
        cout<<"8.  Type 8  for Gaddis 8thEd Chap5 Prob3 Ocean Levels"<<endl;
        cout<<"9.  Type 9  for Gaddis 8thEd Chap5 Prob22 Square Display"<<endl;
        cout<<"10. Type 10 for Gaddis 8thEd Chap5 Prob1 Sum of Numbers"<<endl;
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
            //Declare all Variables Here
            float calpmin=3.6f;    //calories burned per minute
            float calburn;         //calories burned

            //Input or initialize values Here

            //Process/Calculations Here

            for(float minutes=5; minutes<=30;minutes+=5){
                calburn=minutes*calpmin;
                cout<<"In "<<minutes<<" minutes, you have burned "<<calburn<<" calories.\n";
            }

                break;
            }
    case 4:{
        cout<<"Inside Problem D"<<endl;
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare all Variables Here
            int range,nGuess;
            int number,answer;

            //Input or initialize values Here
            cout<<"This is the guessing game"<<endl;
            cout<<"Choose a range for the number to guess"<<endl;
            cin>>range;

            //Process/Calculations Here
            nGuess=log(range)/log(2)+1;
            cout<<"You have "<<nGuess<<" guesses to find the random number"<<endl;
            number=rand()%(range+1);    //[0,range]
            //Display Result of each guess
            for(int guess=1;guess<=nGuess;guess++){
                cout<<"Input your guess "<<endl;
                cin>>answer;
                if(answer>number)cout<<"Guess too High"<<endl;
                else if(answer<number)cout<<"Guess to Low"<<endl;
                else{
                    cout<<"You guessed the number"<<endl;
                    exit(1);
                }
            }
            cout<<"Sorry too many guesses"<<endl;
                        break;
            }
    case 5:{
        cout<<"Inside Problem E"<<endl;
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
     
                break;
            }
    case 6:{
        cout<<"Inside Problem F"<<endl;
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

                break;
            }
    case 7:{
        cout<<"Inside Problem G"<<endl;
            //Declaration of Variables
            int numDays=1;            //number of days
            float money=1.0;          //number of pennies
            float total=0.0;          //total amount of money earned
            float dayPay=0.0;         //amount of money earned in dollars

            //Input values
            cout<<"Input the number of days"<<endl;
            cin>>numDays;
            while (numDays<1){
                cout<<"The number of days CANNOT be negative or less than ZERO"<<endl;
                cin>>numDays;
            }
            for(int days=1;days<=numDays;days++){
                dayPay=money/100;
                cout<<setprecision(2)<<fixed<<showpoint<<"Day "<<days<<" you earned $"<<dayPay<<"\n";
                total+=dayPay;
                money*=2;
            }
            cout<<"Total earnings are $"<<total<<endl;

           break;
            }
    case 8:{
        cout<<"Inside Problem H"<<endl;
                //Declaration of Variables
                float level=0;       //ocean level
                float years=25;      //number of years


                //Input values


                //Process values -> Map inputs to Outputs
                for(float year=1;year<=years;year++){
                    level+=1.5;
                    cout<<"year "<<year<<": "<<level<<" mm"<<endl;
                }
                break;
            }
    case 9:{
        cout<<"Inside Problem I"<<endl;
                //Declaration of Variables
                int sSize=0;

                //Input values
                cout<<"Enter a number between 1 and 15"<<endl;
                cin>>sSize;

                //Process values -> Map inputs to Outputs
                for(int row=1;row<=sSize;row++){
                    for(int column=1;column<=sSize;column++){
                        cout<<"X ";
                    }
                    cout<<endl;
                }
                break;
            }
    case 10:{
        cout<<"Inside Problem J"<<endl;
                  //Declaration of Variables
                int num=0;
                int sum=0;

                //Input values
                cout<<"Input any number."<<endl;
                cin>>num;

                //Process values -> Map inputs to Outputs
                while (num<0){
                    cout<<"Please enter any POSITIVE number.\n";
                    cin>>num;
                }

                for(int n=1;n<=num;n++){
                    sum +=n;
                }
                cout<<"The sum of all the digits preceding, and including your input is "<<sum<<endl;
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}
