/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 20, 2015, 11:26 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned short number;
    //Prompt the user
    cout<<"Input a number from 0 to 3999"<<endl;
    cin>>number;
    //Determine the number of 1000's
    char thousands=(number-number%1000)/1000;
    //Output the thousands in Roman Numerals
    switch(thousands){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1:cout<<"M";break;
        default:;
    }
    //Determine the number of 100's
    number-=thousands*1000;
    char hundreds=(number-number%100)/100;
    //Output the 100's in Roman Numerals
    switch(hundreds){
        case 9: cout<<"CM"; break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1:cout<<"C";break;
        default:;
    }
    //Determine the number of 10's
    number-=hundreds*100;
    char tens=(number-number%10)/10;
    //Output the 100's in Roman Numerals
    switch(tens){
        case 9: cout<<"XC"; break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";break;
        default:;
    }
    //Determine the number of 1's
    number-=tens*10;
    char ones=number;
    //Output the 100's in Roman Numerals
    switch(ones){
        case 9: cout<<"IX"; break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";break;
        default:;
    }
    //Exit Stage Left
    return 0;
}
