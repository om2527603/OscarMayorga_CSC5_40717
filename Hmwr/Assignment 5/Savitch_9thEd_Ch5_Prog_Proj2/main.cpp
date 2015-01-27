/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 26, 2015, 9:03 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Function Prototypes

void waitTime(int &Hour, int &Min,int wait){
    float addHr= Hour;
    float addMin= Min+ (wait);
    if(addMin>=60) addHr=Hour+(Min+wait)/60;
    if(addMin>=60) addMin =  (Min+wait)%60;
 
    cout<<"The wait time is over: "<<addHr<<":"<<addMin<<endl;
    
}

//Execution Begins Here!
int main(int argc, const char * argv[]) {
    //Declare Variables
    int hour,minute,wait; 
    char ans;
    do{
        cout<<"Current hour time (24-hour notation)"<<endl;
        cin>>hour;
        cout<<"Current minute time : "<<endl;
        cin>>minute;
        cout<<"What is the Wait time in minutes?:"<<endl;
        cin>>wait;

        waitTime(hour,minute,wait);
        cout<<"Would you like to repeat?"<<endl;
        cout<<"Enter 'y' or 'Y' to repeat"<<endl;
        cin>>ans;
    
    }while(ans=='y'||ans=='Y');
    
    //Exit Stage Right!!!
    return 0;
}
