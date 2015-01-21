/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 20, 2015, 10:31 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    char thPick=23;
    bool computer;
    short nPckRmv;
    
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many tooth picks to remove
        do{
            cout<<"There are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
            cout<<"How many tooth picks do you want to remove"<<endl;
            cout<<"Choose 1,2, or 3"<<endl;
            cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of toothpicks
        thPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize logic from the book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
        }else if(thPick>=2&&thPick<=4){
            thPick=1;
        }else if(thPick==1){
            thPick=0;
            computer=false;
        }
    }while(thPick>1);
    
    //Output the winner and loser
    switch(static_cast<int>(computer)){
        case 1:{
            cout<<"Computer wins you lose"<<endl;
            break;
        }
        default: 
                cout<<"Computer loses we win"<<endl;
    }
    
    //Exit the Game
    return 0;
}