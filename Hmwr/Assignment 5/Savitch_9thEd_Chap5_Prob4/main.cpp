/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 25, 2015, 10:37 PM
 * Purpose: Determine the coins to give for change
 */

//System Library
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float number;
    
    cout<<"Enter the amount of cents you have to give ="<<endl;
    cin>>number;
    //calculations
    int quarters=number/25;
    int amtleft1=number/25;
    int anmtleft2=number/25/0.10;
    //output
    cout<<"You have to give = ";
    cout<<quarters;
    cout<<"quarters, ";
   
            
    return 0;
}

