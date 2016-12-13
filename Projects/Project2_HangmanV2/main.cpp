/* 
   File:   main
   Author: Kevin Carrillo
   Created on October 17th, 8:30 AM
   Purpose:  Menu with Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //Strings  
#include <iomanip>    //Formating
#include <fstream>    //File I/O  

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void gmeinfo();
void gmeruls();
void playgme();
void hghscre();
void PvP();
void PvC();


//Execution Begins Here!
int main() {
    //Declaration of Variables
    int menuItm;    //Choice from menu
   //New Version
    cout<<"WELCOME to the NEW Version of Hangman!"<<endl;
   
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for More Information"<<endl;
        cout<<"2.  Type 2  for the Rules"<<endl;
        cout<<"3.  Type 3  to Play against computer"<<endl;
        cout<<"4.  Type 4  to Play against another player"<<endl;
        cout<<"5.  Type 5 for High scores"<<endl;
        
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:gmeinfo();break;
            case 2:gmeruls();break;
            case 3:PvC();break;
            case 4:PvP();break;
            case 5:hghscre();
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=5);//Ends the Do-While Loop

    //Exit Program
    return 0;
}

void gmeinfo(){
    cout<<"         More Info: "<<endl;
    cout<<"         New Features: "<<endl;
    cout<<"Now includes Computer Opponent, randomly selected pre-implemented words. \n";
    cout<<"Now keeps a high score and track of player score. \n";
    cout<<"         Old info: "<<endl;
    cout<<"Technically 2 players are required to play the game. \n";
    cout<<"I thought it would be more fun to have an actual person choose the word which creates more difficulty. \n";
    cout<<"Yes, I could have made a menu to allow the user to choose a difficulty and a have it randomize a list of words. \n";
    cout<<"But, Hey now you can play with a friend or your spouse ;) \n";
    cout<<"Enjoy. \n";
}

void gmeruls(){
    cout<<setw(38)<<endl;
    cout<<"!The Rules!"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"     1.) A person will input a word or phrase ."<<endl;
    cout<<"     2.)The actual person has to guess the word or phrase."<<endl;
    cout<<"     3.)You are given 6 tries no matter the word size."<<endl;
    cout<<"     4.)If guess is correct no tries are used."<<endl;
    cout<<"     5.)After all tries, Player loses."<<endl;
    cout<<"     6.)GAME IS CASE SENSITIVE."<<endl;
    cout<<"     7.)New Mode: A word is selected randomly by computer."<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

void PvP(){

cout<<"!!Let The Games Begin!!"<<endl;
   //Declare Variables
     string word;       
       int wrong=0,score;
       char x=' ';
       char o='O';
       char l='|';
       char a='\\';
       char b='/';
       char d='_';
       char c='-';
     ifstream in;
    ofstream out;
       
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
        cout << "There are " << word.length() << " letters " << endl;
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
in.open("HighScores.dat");
       score=((10-wrong)*3);
 in>>score;
  in.close();
    in.clear();
}
void PvC(){
    
}
   void hghscre(){
    //Declaration of Variables
   int score;   
    ifstream in;
    ofstream out;
    string name, name1, buffer=" ";
    short score1;
  
   
    //Open High Score File
    in.open("HighScores.dat");
    in>>name1>>score1>>score; //Pull in the name and the score from the file
    
    //Close and clear
    in.close();
    in.clear();
    
    if (score > score1){ //If the user beat the previous score
        //Display both players score and the one stored
        cout<<endl;
        cout<<"You beat the pervious high-score"<<endl;
        cout<<"The pervious score was:" << endl;
        cout<<score1<<" Points"<<endl;
        cout<<"Your score is:"<<endl;
        cout<<score<<" Points"<<endl;
        //Open the file
        out.open("HighScores.dat");
        //Change the name and high score
        cout<<"Input your first name:";
        cin >> name;
        out<<name<<buffer<<score;
        //Display the player's score.
        cout<<endl<<endl<<endl<< "Final score :"<<endl;
        cout<<setprecision(2)<<showpoint<<fixed<<endl;
        cout<<name<<"   "<<static_cast<float>(score)<<" Points"<<endl;
        //Close and clear the file
        out.close();
        out.clear();
    }
    else if(score==score1){
        cout<<"Tied with previous score "<<endl;
    //User enters name and their score is displayed
        cout<<"Input your first name:";
        cin >> name;
        cout<<setprecision(2)<<showpoint<<fixed<<endl;
        cout<<name1<<"   "<<static_cast<float>(score)<<endl;
    }
    else{//Else 
        //User enters name and their score is displayed
        cout << "You didn't beat the pervious high-score"<<endl;
        cout<<"Input your first name:";
        cin >> name;
        cout<<setprecision(2)<<showpoint<<fixed<<endl;
        cout<<name1<<"   "<<static_cast<float>(score)<<endl;
    }    
   }