/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 24, 2015, 7:10 PM
 * Purpose: reads lbs and ounces and converts to kilograms and grams.
 */
//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes
void ImperToMetric(float &lb,float &oz){
    lb/=2.2046;
    float temp= (oz/16)/2.2046;
    oz=temp/1000;
}

void output(float kg,float g){
    cout<<"weight entered is converted to "<<kg<<" kilograms and "<<g<<" grams."<<endl;
}

//Execution begins here!
int main(int argc, const char * argv[]) {
   //Declare Variables
    char choose; 
    float lb,oz;
    do
    {
        cout<<"Weight in pounds :"<<endl;
        cin>>lb;
        cout<<"Weight in ounces: "<<endl;
        cin>>oz;
        ImperToMetric(lb, oz);
        output(lb,oz);
        cout<<"Repeat program?"<<endl;
        cout<<"Please enter 'y' or 'Y' to repeat. anything else closes"<<endl;
        cin>>choose;
        
    }while(choose=='Y'||choose=='y');
    
    //Exit Stage Right!
    return false;
}

