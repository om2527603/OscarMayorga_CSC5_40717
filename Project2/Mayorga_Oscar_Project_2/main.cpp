/*  Oscar Mayorga
 *  February 5, 2014
 *  Purpose: Spot a Tank
 *  Project 2
 */
//Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global variables and constants

//Function prototypes
int  play(int&, int, int&, int, int&, char&);
int  getDiff();
int  plcTnk();
//Begin execution here
int main(){

    //Declare variables
    int attempt, tnkPos, score, diff, ammo, att=0;
    float dist;
    char choice, b;
    
    //Display title and story
    cout<<" Fatal Trajectory "<<endl;
    cout<<"You're under attack!!"<<endl;
    cout<<"Outside your base, several tanks appear"<<endl;
    cout<<"The tanks will come within 1000 meters."<<endl;
    cout<<"Input the angle to aim your cannon and the speed to fire the projectile."<<endl;
    cout<<"You have 15 shots to destroy as many as you can."<<endl;
    cout<<endl;

    //Get the system time
    unsigned seed = time(0);

    //seed random number generator
    srand(seed);
    do{
        tnkPos = plcTnk(); //place tank
        //Prompt for difficulty
        diff =  getDiff();
        cout<<endl<<endl;
        //Reset scores and ammo
        score = 0;
        ammo = 15;
        //Loop for tank destruction
        for (int attmpt = 0; attmpt<15; attmpt++){ 
        //reset bonus to 0
         b=0;
        //call main game play function
        play (tnkPos, diff, score, ammo, att, b);
        ammo--;
        //Bonus shot rewarding system
        //increment shots remaining message
        //decrement for loop
        if (b == 1){
            ammo++;
            attempt--;
            }
        }    
    cout<<"score = "<<score<<endl; 
    cout<<"The number of tank you hit = "<<score/50<<endl;
    //call function to show high scores
    //Ask user for replay
    cout<<"You want to Play again?"<<endl;
    cout<<"Type Y to play again"<<endl;
    cin>>choice;
    }while(choice=='y'||choice=='Y');
    
    return 0;
}
