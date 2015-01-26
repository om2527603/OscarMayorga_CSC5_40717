/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 22, 2015, 11:47 PM
 *      Purpose:  Time Diff
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
    int strHrs,strMins,strIsAm=false;
    int endHrs,endMins,endIsAm=false;
    char ap,dummy;
    //Prompt for the start time
    cout<<"Input the Start Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>strHrs>>strMins>>ap>>dummy;
    if(ap=='A'||ap=='a')strIsAm=true;
    //Prompt for the end time
    cout<<"Input the End Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    if(ap=='A'||ap=='a')endIsAm=true;
    //Calculate the minutes for each
    if(!strIsAm)strHrs+=12;
    int strTime=strHrs*60+strMins;
    if(!endIsAm)endHrs+=12;
    int endTime=endHrs*60+endMins;
    int diffMin=endTime-strTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    //Output the results
    cout<<"The difference in Time = ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"
        <<(min<10?'0':'\0')<<min<<endl;
    //Exit Stage Right
    return 0;
}
