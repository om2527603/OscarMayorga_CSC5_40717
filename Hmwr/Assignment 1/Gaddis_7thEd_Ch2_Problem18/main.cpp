/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 8, 2015, 8:50 AM
 * Purpose: Hmwr, Solution to free fall problem 
 */

//system Librery 
#include <iostream>
using namespace std;

//User Librery 

//Global Constants 
const char CONVPCT=100;//Percent conversion 

//Function Prototypes 

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//Customers Surveyed 
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers 
    //Calculate costumer number requested  
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers 
    //Output the results 
    cout<<"Customers surveyed that are energy drinkers = ";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = ";
    cout<<custC<<endl;
    //Exit stage right 
    return 0;
}