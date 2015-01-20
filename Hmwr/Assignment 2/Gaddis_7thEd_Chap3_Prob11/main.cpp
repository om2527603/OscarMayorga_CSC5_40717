/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 14, 2015, 8:07 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and initialize
    float bcToer=164.75;   //Jan 14th, 2015 8:07am
    float MxPsToDlr=14.28;//Same Date
    float HonLemToDlr=21.0;  //Same Date
    float bitcoin,Euros,MexicanPesos,HondurasLempiras;
    //Input the number of bitcoin and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //Convert to all the currencies
    Euros=bcToer*bitcoin;
    MexicanPesos=MxPsToDlr*Euros;
    HondurasLempiras=HonLemToDlr*Euros;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<Euros<<"(Euros)"<<endl;
    cout<<bitcoin<<" =   "<<MexicanPesos<<"(MexicanPesos)"<<endl;
    cout<<bitcoin<<" = "<<HondurasLempiras<<"(HondurasLempiras)"<<endl;
    //Exit stage right!
    return 0;
}
