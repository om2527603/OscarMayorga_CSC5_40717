/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Purpose: Two Programs in one
 * Created on January 26, 2015, 4:50 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

//Execution Begins Here!
int main() {
 string answer;
 do { 
    int choice = 0;
    cout << "Select the type of conversion you would like to perform: " << endl
        << "1. Feet/inches to meters/centimeters" << endl
        << "2. Meters/centimeters to feet/inches" << endl 
        << "enter 1 or 2: ";
 
    cin >> choice;
 
    float feet, inches, meters, cm; 
    if (choice == 1) { 
      cout << "Feet: "; 
      cin >> feet; 
      cout << "Inches: "; 
      cin >> inches; 
      
      meters = (feet + inches/12) * 0.3048;
     
      cm = modf(meters, &meters);
      cm *= 100; 
      cout << "There are " << meters << " meters, " << cm << " centimeters in " 
           << feet << " feet, " << inches << " inches" << endl; 
    }
    else if (choice == 2) { 
      cout << "Meters: "; 
      cin >> meters; 
      cout << "Centimeters: "; 
      cin >> cm;

      feet = (meters + cm/100) / 0.3048; 

      inches = modf(feet, &feet); 
      inches *= 12;
 
      cout << "There are " << feet << " feet, " << inches << " inches in " 
           << meters << " meters, " << cm << " centimeters" << endl; 
    }

    cout << "Would you like to do another conversion? yes/no : "; 
    cin >> answer;
 } while (answer == "y"); 

return 0;
}

