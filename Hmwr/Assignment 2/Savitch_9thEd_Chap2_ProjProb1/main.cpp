/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 14, 2015, 10:15 AM
 * Purpose: Show how much diet Coke can kill you!
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float CNVLBGM=453.6;//Grams per pound
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare the variables
    const float CONC=1e-3f;//Sweetener concentration 
    float wtCoke=3.5e2f;//Weight of coke per gram
    float kMouse=5.0f;//Quantity of sweetener that kill the mouse 
    float wtMouse=3.5e1f;//Wt of mouse in rams 
    float kPer, wtDsPer;
    int nCans;
    //Input the desire wt of person
    cout<<"Input your desired weight in lbs"<<endl;
    cout<<"Note: grams are a mass not a weight"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//convert to grams 
    //Calculation 
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limits you can drink 
    cout<<"Number of cans of diet coke ";
    cout<<"that will kill you = "<<nCans<<endl;
    //Exit stage Right!
    
    return 0;
}

