/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 14, 2015, 9:44AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float mph;//Miles per hour on a treadmill
    float hpm;//Pace as hours per mile
    float fmpm;//Miles per minute as a float
    int   impm;//Miles per minute as an integer
    float fmspm;//Fraction left for seconds per mile
    //Prompt for the input
    cout<<"How many miles are you running"<<endl;
    cout<<"in two hour?"<<endl;
    cout<<"Format answer as a float."<<endl;
    cin>>mph;
    //Calculate the relevant pace
    hpm=2/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>(fmpm);
    fmspm=(fmpm-impm)*CNVMNSC;
    //Output the result
    cout<<mph<<" (mph) = ";
    cout<<impm<<" (mins) ";
    cout<<fmspm<<" (secs) per mile"<<endl;
    //Exit stage right
    return 0;
}

