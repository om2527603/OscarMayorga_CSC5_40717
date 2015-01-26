/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 24, 2015, 4:34 PM;
 * Purpose: Covert from a 24-hours notation to a 12-hours notation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
                unsigned short hour, minutes;
                char A;
                char P;
                //Prompt the user
                cout<<"Input a hour from 1 to 24"<<endl;
                cin>>hour;
                cout<<"Input the minutes 00 to 60"<<endl;
                cin>>minutes;
                
                //Determine the hour 1 to 24
                
                //Output the hours in 12-hours notation
                if(hour>12){    
                switch(hour){
                    case 13: cout<<"1:";break;
                    case 14: cout<<"2:";break;
                    case 15:cout<<"3:";break;
                    case 16: cout<<"4:";break;
                    case 17: cout<<"5:";break;
                    case 18:cout<<"6:";break;
                    case 19: cout<<"7:";break;
                    case 20: cout<<"8:";break;
                    case 21:cout<<"9:";break;
                    case 22: cout<<"10:";break;
                    case 23: cout<<"11:";break;
                    case 24:cout<<"12:";break;
                    default:;
                            }
                cout<<minutes;
                cout<<"Pm"<<endl;
                           }
                else if(hour<=12){
                    cout<<hour<<":";
                    cout<<minutes;
                    cout<<"Am"<<endl;
                }
                           
    return 0;
}

