/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 25, 2015, 8:13 AM
 * Purpose: converts from feet/inches to meters/centimeters 
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

//Execution Begins Here!
int main() {
    //Declare Variables
 string answer;
 float feet, inches, meters, cm; 
    //Calculations
 meters=(feet+inches/12)/3.28084;
 cm=inches/0.393701;
 do { 
      cout<<"Feet:"; 
      cin >>feet; 
      cout<<"Inches:"; 
      cin>>inches;

     
      meters=(feet+inches/12)/3.28084;
      cm=(inches/0.393701+feet/0.0328084);
      cout<<"There are "<<meters<<" meters";
      cout<<" and "<<cm<<"centimeters in "; 
      cout<<feet<<"feet and "<<inches<<" inches"<< endl; 
      cout<<"Would you like to do another conversion? yes/no : "; 
      cin>> answer;
 } 
 while (answer == "y" || answer=="Y"); 

return 0;
//Exit Stage Right!!
}
