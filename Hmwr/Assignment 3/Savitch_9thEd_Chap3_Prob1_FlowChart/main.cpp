/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 18, 2015, 8:44 PM
 * Find the total cost of a long distance call
 */

//System Library 
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare the variables 
    float LngCl;//Length of the call
    float tlCost1,tlCost2,tlCost3;//Total cost of call
    
    
    //Days of the week 
    cout<<"Solution 1 Mo, Tu, We, Th, Fr(8:00am-6:00pm)"<<endl;
    tlCost1=LngCl*40/100;
    cout<<"Solution 2 Mo, Tu, We, Th, Fr(6:00pm-8:00pm)"<<endl;
    tlCost2=LngCl*25/100;
    cout<<"Solution 3 Sa, Su(All Day)"<<endl;
    tlCost3=LngCl*15/100;
    top:
    cout<<"Input the solution you want to see according";
    cout<<"to the day and time the call was made: "<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 1:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost1=LngCl*40/100;
            cout<<tlCost1;
            cout<<" Dollars."<<endl;
         }
            break;
        case 2:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost2=LngCl*25/100;
            cout<<tlCost2;
            cout<<" Dollars."<<endl;
         }
            break;
        case 3:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost3=LngCl*15/100;
            cout<<tlCost3;
            cout<<" Dollars."<<endl;

         }
            break;
        }
    {
        goto top;
    }

    
    return 0;
}

