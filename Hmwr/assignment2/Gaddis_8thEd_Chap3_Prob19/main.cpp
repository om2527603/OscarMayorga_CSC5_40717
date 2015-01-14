/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 14, 2015, 8:58 AM
 * Purpose: My Car Payment
 */

//System Library
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float intRate=0.0319f/12;//http://www.capitalone.com/auto-financing/rates/?Log=1&EventType=Link&ComponentType=T&LOB=MTS%3A%3ALCTML6KG4&PageName=Auto+navigator&PortletLocation=4%3B16-col%3B4-1-1-1&ComponentName=content2%3B18&ContentElement=2%3BSee+Rates&TargetLob=MTS%3A%3ALCTML6KG4&TargetPageName=Auto+Loan+Rates&referer=https%3A%2F%2Fwww.capitalone.com%2Fauto-financing%2Fauto-navigator&external_id=WWW_LP058_XXX_SEM-Brand_Google_ZZ_ZZ_T_Home
    float msrplus=4e4f;      //Loan amount for Buick Avenir
    char  nPaymnt=80;        //Number of monthly payments
    //Calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs
    cout<<"Interest per year in percent = "<<intRate*100*12<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //Output our car payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    return 0;
}