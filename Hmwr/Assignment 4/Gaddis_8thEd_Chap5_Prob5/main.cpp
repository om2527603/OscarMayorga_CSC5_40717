/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 26, 2015, 7:35PM
 * Purpose: percentage increase of a country club
 */
// System Libraries
#include <iostream>
#include <cmath>

using namespace std;

//User Libraries

//GLobal Consants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
            //declare variables
            float yrCst = 2500;
            float increas =.04; // percent of increase yearly
            float yrs = 1;
            float newCost = yrCst*pow(1+increas,yrs);
            // output the results
            cout<<"Country club prices will be going up"<<endl;
            cout<<"4 percent for the next 6 years"<<endl;
            cout<<"Year             Price"<<endl;
            cout<<"__________________________"<<endl;
            while(yrs<=6){
                float newCost = yrCst*pow(1+increas,yrs);
                cout<<"Year "<<yrs<<" will cost $"<<newCost<<endl;
                yrs++;
            }
//Exit stage right!
            
return 0;
}