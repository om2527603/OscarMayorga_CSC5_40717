/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 21, 2015, 8:57 AM
 *      Purpose:Factorial
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float approxEx=1,exactEx,x;
    //Prompt the user for the power of e^x
    cout<<"What x in e^x would you like to use?"<<endl;
    cin>>x;
    //Calculate e^x
    for(int n=1;n<=13;n++){
        int nFactrl=1;
        //Do the calculation for factorial
        for(int i=1;i<=n;i++){
                nFactrl*=i;
        }
        approxEx+=(pow(x,n)/nFactrl);
    }
    //Calculate the exact e^x
    exactEx=exp(x);
    //Compare the results
    cout<<"Approximate e^x = "<<approxEx<<endl;
    cout<<"Exact e^x       = "<<exactEx<<endl;
    //Exit Stage right
    return 0;
}
