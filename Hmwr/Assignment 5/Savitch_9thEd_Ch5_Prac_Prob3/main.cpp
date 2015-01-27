/* 
 * File:   main.cpp
 * Author: Jorge Haro
 * Created on January 26, 2015, 9:57 PM
 * Purpose: converts meters/centimeters to feet/inches.
 */

#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

int main() {
 string answer;
 do { 
 
    float feet, inches, meters, cm; 
      cout<<"Meters: "; 
      cin>>meters; 
      cout<<"Centimeters: "; 
      cin>>cm;
 
      
      feet=(meters+cm/100)/0.3048; 

      inches=modf(feet, &feet); 
      inches*=12;
 
      cout<< "There are "<< feet<< " feet,  "<<inches<< " inches in " 
           <<meters<<" meters, "<<cm<<" centimeters"<<endl; 
   

    cout<<"Would you like to do another conversion? yes/no : "<<endl; 
    cin>>answer;
 } while (answer == "y"); 

return 0;
}

