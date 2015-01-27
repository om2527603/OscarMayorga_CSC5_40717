/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 26, 2015, 6:13PM
 * Purpose:Determine how high sea level 
 *              would be in an amount of years
 */
        // System Libraries
#include <iostream>
using namespace std;

//User Libraries

//GLobal Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    int yrs;
    int totYr;//Total Years 
    float totRisin = totYr*1.5;
    //prompt for input
    cout<<"How high will the sea levels be?"<<endl;
    cout<<"Input the Amount of years to see: "<<endl;
    cout<<"how high the sea level would be? :"<<endl;
    cin>>yrs;
    //create the loop
    for(totYr=1; totYr<=yrs; totYr++){
        float totRisin = totYr*1.5;
        cout<<"In "<<totYr<<" Years the sea Rose : "<<totRisin<<" mm"<<endl; 
    }
    return 0;
}

