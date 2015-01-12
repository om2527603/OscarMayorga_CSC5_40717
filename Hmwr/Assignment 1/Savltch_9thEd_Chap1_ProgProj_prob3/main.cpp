/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 8, 2015, 11:31 AM\
 * Porpuse: hmwr, Solution for a monitary value program.
 */

//System librery
#include<cstdlib>
#include <iostream>
using namespace std;

//User Library

//Global Constants 

//Prototype

//Execution Begins here!
int main(int argc, char** argv) {
    int qrtrs , dimes , nicks , penns , tlChng, tlDoll;
        // qrtrs are quarters 
        //nicks are nickels 
        //penns are pennies 
        //tlChng is total in change
        // tlMoney is total dollars 
    cout<< "this program helps to count your change."<<endl;
    cout<< "enter total amount of quarters you have."<<endl;
    cin>>qrtrs;
    cout<< "Enter total amount of dimes you have."<<endl;
    cin>>dimes;
    cout<< "Enter total amout of Pennies you have."<<endl;
    cin>>penns;
    cout<< "Enter total number of nickels you have."<<endl;
    cin>>nicks;
            tlChng = (qrtrs*25) + (dimes*10) + (nicks*5) + (penns*1);
            tlDoll = (tlChng) / (100);
            
    cout<< "You have ";
    cout<<tlDoll;
    cout<< "Dollars and ";
    cout<<tlChng;
    cout<< " Is the total amout of Cents in Change that you have "<<endl;
    
    //Exit  Stage Right
    
    return 0;
}

