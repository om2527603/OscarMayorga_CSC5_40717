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
    //Declare Variables
    int strHrs,strMins;
    int WtHrs,WtMins;
    int TmAftrH,TmAftrM, hrs, mins;
    //Calculations
    hrs=strHrs+WtHrs;
    mins=strMins+WtMins;
    
    //Prompt for the start time
    cout<<"Input the Current Time"<<endl;
    cout<<"The Hour, The Minutes"<<endl;
    cin>>strHrs>>strMins;
    //Prompt for the waiting time
    cout<<"Input the waiting Time"<<endl;
    cout<<"The Hour, The Minutes"<<endl;
    cin>>WtHrs>>WtMins;
    //output the results 
    if (mins<60){
    cout<<"The time after waiting would be = "<<endl;
    hrs=strHrs+WtHrs;
    mins=strMins+WtMins;
    cout<<hrs<<":"<<mins;
    }
    else {
        cout<<"Enter o'clock hours!!";
                
    }
   
            
    return 0;
}

