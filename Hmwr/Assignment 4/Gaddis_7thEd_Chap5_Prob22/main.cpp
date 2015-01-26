/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 23, 2015, 2:36 PM
 *      Purpose:Create a character Square
 *              and have it visually look
 *              like a square, different
 *              from book requirements
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare a variable
    int widHght;
    //Prompt for the input
    cout<<"How large do you want the character square"<<endl;
    cin>>widHght;
    //Utilize countable loops
    cout<<endl;
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right
    return 0;
}

