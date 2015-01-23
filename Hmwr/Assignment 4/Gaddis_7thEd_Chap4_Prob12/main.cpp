/* File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 20, 2015, 10:23 PM
 *      Purpose:Fahrenheit/Celsius Conversion Table
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    int f1=32;
    int f2=212;
    float c1=0;
    float c2=100;
    float cEqua;
    float cInterp;
    //Loop to Create a table
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Fahrenheit   Eq Celsius  Interp Celsius"<<endl;
    for(int fahr=f1;fahr<=f2;fahr+=10){
        cEqua=5.0f/9.0*(fahr-32);
        cInterp=c1+(c2-c1)/(f2-f1)*(fahr-f1);
        cout<<setw(6)<<fahr<<setw(14)<<cEqua<<setw(15)<<cInterp<<endl;
    }
    return 0;
}
