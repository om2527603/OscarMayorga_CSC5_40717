/* 
 * File:   main.cpp
 * Author: Capture Station
 *
 * Created on January 10, 2015, 11:31 PM
 * Porpuse: hmwrk, Practice Programs Problem 5
*/

//System librery
#include <cstdlib>
#include <iostream>
using namespace std;

//User Library

//Global Constants 

//Prototype

//Execution Begins here!
int main( )
{
    int width, height, total_Length, feeet;
    cout<< "Hello! "<<endl;
    cout<< "Press return after entering a number."<<endl;
    cout<< "Enter the with;|n";
    cin>> width;
    cout<< "Enter the height:|n";
    cin>>height;
    total_Length=width*height;
    cout<< "If the width is ";
    cout<< width;
    cout<< "feet ";
    cout<< "and the heigth is ";
    cout<< height;
    cout<< "feet, then ";
    cout<< "the total Length is ";
    cout<< total_Length;
    cout<< "feet."<<endl;
    cout<< "Good-bye!";
    return 0;
}