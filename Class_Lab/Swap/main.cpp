/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 13, 2015, 9:17 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int a=2,b=3;
    //Output the values
    cout<<"Before the swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    //Swap
    int temp=a;
    a=b;
    b=temp;
    //Output the values after swap
    cout<<"After temp swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    //Swap
    a=a^b;
    b=a^b;
    a=a^b;
    //Output the values after swap
    cout<<"After xor swap"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    //Exit stage right
    return 0;
}

