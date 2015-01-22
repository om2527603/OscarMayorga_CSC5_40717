/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 14, 2015, 11:20 AM
 */

//System Libraries
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
    float i;//Interest Rate per cent per year
    float t;//Temp variable
    float l;//Loan amount $'s
    unsigned short n;//Number of months
    float mp;//Monthly Payment $'s
    //Input the variables required
    cout<<"What is the interest rate in per cent per year!(format float)"<<endl;
    cin>>i;
    i/=(100*12);//Convert to decimal
    cout<<"What is the loan amount $'s (floating format)"<<endl;
    cin>>l;
    cout<<"Number of monthly Payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly payment
    if(i<=0){
        mp=l/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //Display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment = $"<<mp<<endl;
    //Exit stage right!
    return 0;
}
