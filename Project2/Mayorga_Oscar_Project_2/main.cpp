/*  Oscar Mayorga
 *  February 5, 2014
 *  Purpose: Spot a Tank
 *  Project 2
 */
//Libraries
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

//Global constants
const float PI = 3.14;
const float G = 9.8;
//Function prototypes
int  play(int&, int, int&, int, int&, char&);
int  getDiff();
int  plcTnk();
void highscores(int, int);


//initialize structure for high scores
    struct highscore{
        string name;
        int score;
    };

//Execution begins here
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
//function for selecting difficulty
int getDiff(){
    char chc;
    int diff;
    //Prompt for difficulty
    cout<<"How Difficult you want the game to be?"<<endl;
    cout<<"Type 'e' for easy, type 'h' for hard"<<endl;
    cin>>chc;

    //Input 
    while(chc!='e'&&chc!='E' && chc!='h'&&chc!='H'){
        cout<<"Invalid choice, type E or H"<<endl;
        cin>>chc;
        cout<<endl;
    }
    //Initialize difficulty by setting explosive blast radius
    if(chc == 'e'||chc == 'E'){
        cout<<"Easy mode activated!"<<endl;
        cout<<"Cluster bombs enabled"<<endl;
        cout<<"Blast radius: 70m"<<endl;
        diff = 70;
    }
    else if(chc == 'h'||chc == 'H'){
        cout<<"Hard mode!"<<endl;
        cout<<"projectile blast radius: 30m"<<endl;
        diff = 30;
    }
    return diff;
}
//Function to place tank
int plcTnk(){
    int x;
    x = 1 + rand() % 999;
    return x;
}
//Function for user firing input
void input(int &a,int &p){
    
        //Prompt the user for inputs
        do{
        cout<<"Input firing angle (0-90)"<<endl;
        cin>>a;
    }while(a>90||a<0);
        do{
        cout<<"Input projectile power in meters per second (1-100)"<<endl;
        cin>>p;
        }while(p>100||p<0);
}

//Function calculating where projectile hits
int ballDst(int a, int p){

    float d;
    
    d = ((p*p)*sin(2*(a*(PI/180))))/G;
    return d;
}

//Function testing if projectile hit
bool hitMiss(float dist, int t, char diff){
    
    //test if projectiles blast radius hit tank
    if (dist > t-diff && dist < t+diff){
        return true;
    }
    else
        return false;
}

//Function for displaying hit information
void hitDisp(bool hit, int d, int t){

    if(hit==true){
        cout<<"Target hit!"<<endl;
        cout<<"Tank was at "<<t<<"m"<<endl;
    }
    if(hit==false){
        cout<<"Target missed..."<<endl;

        //Display if too close or too far
        if(d<t-10){
            cout<<"Shot too close"<<endl;
        }
        else if(d>t+10){
            cout<<"Shot too far"<<endl;
        }
    }
    cout<<endl<<endl;
}