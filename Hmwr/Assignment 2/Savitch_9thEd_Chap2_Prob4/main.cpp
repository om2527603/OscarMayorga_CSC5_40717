/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 16, 2015, 12:20 AM
 * Purpose: Payment Calculation
 */

//System Library
#include <cstdlib>
#include <iostream>
#include <istream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
     //Declare variables
    float intRate;//Interest rate 
    float FcVl;//Face Value 
    float AmtNdIt;//Amount need it for the consumer 
    float nMthPym;//Number of months to pay the loan 
    float TtlIntOw;//Total amount of interest owed
    float  MthlyPym;//Monthly payments
    float Years;//Years for the loan 
    float Intr;//Interest per month 
    //Calculations
    TtlIntOw=Years*Intr;
    Intr=intRate*AmtNdIt;
    Years=nMthPym/12;
    MthlyPym=FcVl/nMthPym;
    FcVl=TtlIntOw+AmtNdIt;
    
    cout<<"What is the interest rate?"<<endl;
    cout<<"Note: insert the interest rate as a decimal."<<endl;
    cin>>intRate; 
    cout<<"What is the Amount need it?"<<endl;
    cin>>AmtNdIt;
    cout<<"How many months are you going to be paying for the loan?"<<endl;
    cin>>nMthPym;
    cout<<"The face value is = ";
    FcVl=TtlIntOw+AmtNdIt;
    cout<<FcVl<<endl;
    cout<<"The Monthly payment would be = ";
    MthlyPym=FcVl/nMthPym;
    cout<<MthlyPym;
    
   
    return 0;
}

