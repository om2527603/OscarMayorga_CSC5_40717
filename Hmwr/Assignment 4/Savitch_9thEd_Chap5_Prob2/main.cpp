/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 25, 2015, 7:48 PM
 * Purpose:Show the time after a period of time
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
    int crtHrs, crtMins;//Current time
    int endHrs, endMins;//Waiting time
    char AfterWT;//Time after Waiting
    
    //Calculation
    int crtTime=crtHrs*60+crtMins;
    int endTime=endHrs*60+endMins;
    
            
    cout<<"input the Current time:"<<endl;
    cout<<"The hours, Minutes"<<endl;
    cin>>crtHrs>>crtMins;
    cout<<"input the end time:"<<endl;
    cout<<"The hours, Minutes"<<endl;
    cin>>endHrs>>endMins;
    
    //output
    cout<<"The waiting Period is = ";
    int hrs=endHrs-crtHrs;
    cout<<hrs<<":";
    int mins=endMins-crtMins;
    cout<<mins<<endl;
        
 return 0;
}