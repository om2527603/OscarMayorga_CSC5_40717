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
    int width, height, width2,height2, total_Length2, total_Length, total_Area;
    cout<< "Hello! "<<endl;
    cout<< "This program helps you find the total Area of two rectangles."<<endl;
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
    
    cout<< "Enter the with2;|n";
    cin>> width2;
    cout<< "Enter the height2:|n";
    cin>>height2;
    total_Length2=width2*height2;
    cout<< "If the width is ";
    cout<< width2;
    cout<< "feet ";
    cout<< "and the heigth is ";
    cout<< height2;
    cout<< "feet, then ";
    cout<< "the total Length is ";
    cout<< total_Length2;
    cout<< "feet."<<endl;
    total_Area= total_Length+total_Length2;
    cout<< "The total area of the two rectangles is ";
    cout<<total_Area;
    cout<< "feet."<<endl; 
    cout<< "Good-bye!";
    return 0;
}