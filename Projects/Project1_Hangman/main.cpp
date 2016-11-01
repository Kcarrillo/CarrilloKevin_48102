/* 
   File:   main
   Author: Kevin Carrillo
   Created on October 17th, 8:30 AM
   Purpose:  Menu with Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void problem1();
void problem2();
void problem3();


//Execution Begins Here!
int main() {
    //Declaration of Variables
    int menuItm;    //Choice from menu
   
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for More Information"<<endl;
        cout<<"2.  Type 2  for the Rules"<<endl;
        cout<<"3.  Type 3  to Play the Game"<<endl;
        
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:problem1();break;
            case 2:problem2();break;
            case 3:problem3();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=3);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

void problem1(){
    cout<<"         More Info: "<<endl;
    cout<<"Technically 2 players are required to play the game. \n";
    cout<<"I thought it would be more fun to have an actual person choose the word which creates more difficulty. \n";
    cout<<"Yes, I could have made a menu to allow the user to choose a difficulty and a have it randomize a list of words. \n";
    cout<<"But, Hey now you can play with a friend or your spouse ;) \n";
    cout<<"Enjoy. \n";
}

void problem2(){
    cout<<setw(38)<<endl;
    cout<<"!The Rules!"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"     1.) A person will input a word or phrase ."<<endl;
    cout<<"     2.)The actual person has to guess the word or phrase."<<endl;
    cout<<"     3.)You are given 6 tries no matter the word size."<<endl;
    cout<<"     4.)If guess is correct no tries are used."<<endl;
    cout<<"     5.)After all tries, Player loses."<<endl;
    cout<<"     6.)GAME IS CASE SENSITIVE."<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

void problem3(){

    cout<<"!!Let The Games Begin!!"<<endl;
   //Declare Variables
     string word;       
       int wrong=0;
       char x=' ';
       char o='O';
       char l='|';
       char a='\\';
       char b='/';
       char d='_';
       char c='-';
    //Input Values
        cout << "Enter the word for the other player to guess" << endl;
        cin.ignore();
        getline(cin, word);
    
    //Process Word
     string copy = word;
      string undrScr;
     for(int i=0; i!=word.length(); i++){

        if(word.at(i) == ' '){
        undrScr += " ";
    } 
        else{
      undrScr += "_";
    }
  }
  //Display Board
         cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
       
    //Process Guesses
         for(int i=0; i!=50; ++i){
        cout << endl;
    }
       string guess;  
       while(1){
            if(wrong == 6){
            cout << "You Lose! The word was: " << word << endl;
        cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<b<<l<<a<<x<<l<<x<<endl;
         cout<<x<<x<<b<<x<<a<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            break;
        }
            else if (wrong==5){
                cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<b<<l<<a<<x<<l<<x<<endl;
         cout<<x<<x<<b<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            }
            else if (wrong==4){
                cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<b<<l<<a<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            }
            else if(wrong==3){
                cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<b<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            }
            else if(wrong==2){
                cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            }
            else if(wrong==1){
                cout<<x<<x<<x<<x<<x<<x<<x<<x<<endl;
         cout<<x<<x<<x<<c<<c<<c<<l<<x<<endl;
         cout<<x<<x<<x<<l<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<o<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<l<<x<<endl;
         cout<<x<<x<<x<<x<<x<<x<<d<<x<<endl;
            }
                

        cout << undrScr << endl;
        cout << "There are " << word.length() << " letters with spaces" << endl;
        cout << "You have " << 6 - wrong << " more tries left" << endl;
    
        if(undrScr == word){
            cout << "CONGRATS, You win!" << endl;
        break;
    }

    cout << "Guess a letter or a word" << endl;
    getline(cin, guess);
    
    if(guess.length() > 1){
      if(guess == word){
        cout << "You are correct, YOU WIN!" << endl;
        break;
      } else{
        cout << "wrong word " << endl;
        wrong++;
      }
    } else if(copy.find(guess) != -1){
        while(copy.find(guess) != -1){
          undrScr.replace(copy.find(guess), 1, guess);
          copy.replace(copy.find(guess), 1, "_");
        }
    } else{
      cout << "That's wrong" << endl;
      wrong++;
    }
    
    cout << endl;
  }
}