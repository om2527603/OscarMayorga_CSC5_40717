/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 15, 2015, 9:55 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare variables
    const float MAX = 300;//Maximum capacity of people that can attend 
    float Number_of_people; 
    float SpPlAv;//Number of spaces available for people  
    float NumPlExc;//Number of people that have to be excluded it
    cout<<"Enter the number of people attending the meeting: ";
    cin>>Number_of_people;
    
    //Calculations 
    SpPlAv=MAX-Number_of_people;
    NumPlExc=Number_of_people-MAX;
    
    if (Number_of_people < MAX)
    {
        cout<<"You can have a meeting legally."<<endl;
        cout<<"Make plans to make a successful meeting."<<endl;
        cout<<"You can actually invite more people."<<endl;
        cout<<"There are still ";
        SpPlAv=MAX-Number_of_people;
        cout<<SpPlAv;
        cout<<" spaces availible for more people"<<endl;
    }
    
    else 
    {
        cout<<"The meeting cannot be held as planned do to fire regulations."<<endl;
        cout<<"You have to exclude people to plan the meeting again."<<endl;
        cout<<"the amount of people to be exclude its: ";
        NumPlExc=Number_of_people-MAX; 
        cout<<NumPlExc<<endl;
    }
return 0;
}