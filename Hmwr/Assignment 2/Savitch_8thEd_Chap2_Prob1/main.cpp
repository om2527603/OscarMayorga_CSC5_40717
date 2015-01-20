/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 13, 2015, 11:02 AM
 * Purpose: Metric conversion.
 */

//System Library 
#include<iostream>

using namespace std;

//User Library 
 
//Global Constant
const float CMTNONS=3.527392e4f;//Conversion from Metric tons to ounces 
 
//Funtion Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal contents in ounces.
    float wtPackTn;//Weight of cereal in metric tons.
    float nPackTn;//Number of cereal boxes in a metric ton.
     //Prompt user for cereal weighs.
    cout<<"Input the number of ounces on the cereal box";
    cout<<"to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn; 
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    //Ask if the user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y'){
        //Prompt user for cereal weighs.
    cout<<"Input the number of ounces on the cereal box";
    cout<<"to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn; 
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
    }
    return 0;
}

