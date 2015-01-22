/*
* File: main.cpp
* Author: Oscar Mayorga
* Created on January 12, 2015, 10:07 AM
* Purpose: Illustrate branching code concepts
* numbers
*/
//System Libraries
#include <cstdlib> //Random rand(),srand()
#include <iostream>//Keyboard/Monitor I/O
#include <ctime> //Time functions
using namespace std;
int main(int argc, char** argv) {
    //Randomly initialize a variable
    srand(static_cast<unsigned int>(time(0)));
    bool torf=rand()%2;
    //Output the random boolean
    cout<<"We randomly chose "<<torf<<endl;
    
    //Illustrate the ternary operator
    cout<<"Using the ternary operator  ";
    cout<<"The random boolean is ";
    cout<<(torf?"Odd":"Even")<<endl;
    
    //Illustrate separate if statements
    cout<<"Using the if statement      ";
    cout<<"The random boolean is ";
    if(torf==1)cout<<"Odd"<<endl;
    if(torf==0)cout<<"Even"<<endl;
    
    //Illustrate the if-else single statement
    cout<<"Using the if-else statement ";
    cout<<"The random boolean is ";
    if(torf==1)cout<<"Odd"<<endl;
    else cout<<"Even"<<endl;
    
    //Illustrate the switch statement
    cout<<"Using the switch statement  ";
    cout<<"The random boolean is ";
    switch(static_cast<int>(torf)){
        case 1:  cout<<"Odd"<<endl;break;
        default: cout<<"Even"<<endl;
    }
    //Exit stage right!
    return 0;
}
