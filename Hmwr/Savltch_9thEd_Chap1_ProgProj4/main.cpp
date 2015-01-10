/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 6, 2015, 10:30 AM
 * Purpose: Hmwr, Solution to free fall problem 
 */

//system Librery 
#include <cstdlib>
#include <iostream>
using namespace std;

//User Librery 

//Global Constants 
const float GRAVITY=32.174;//ft/sec^2

//Function Prototypes 

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time; //(secs)
    unsigned int dist;//distance (ft)
    //Promt user for input 
    cout<<"The program calculates free fall"<<endl;
    cout<<"distance dropped in feet with an"<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The time input is a positive integer"<<endl;
    cin>>time; 
    //calculate the distance dropped 
    dist=1.0*GRAVITY*time*time;
    //Output the results 
    cout<<"Distance dropped = "<<dist<<" (ft) "<<endl;
    //Exit stage right 
    return 0;
}

