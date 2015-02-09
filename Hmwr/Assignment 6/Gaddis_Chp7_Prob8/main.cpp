/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February, 2015, 10:12 PM
 * Purpose: Homework 
 */

//User Libraries
#include <iostream>
#include<iomanip> //setprecision
using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!
int main(int argc, char** argv) {
    
int x; //holds employee ID number/wages
int empld[7]={5658845,4520125,7895122,8777541,8451277,1302850,750489}; //holds the IDs given by book
float rate;//Holds the wages
float hour;//Holds the number of hours the employee has worked
float wages[7]; //Float array holds the wages for the 7 employees

for(x=0;x<=6;x++) //For loop to display the 7 employee IDs
{
cout<<"Employee number : "<<empld[x]<<endl;
cout<<endl;
cout<<"Enter the employee's hour : ";//user is asked to enter in the number of hours worked
cin>>hour;
cout<<"Enter employee's pay rate : "; //user is asked to enter the pay rate by which the employees are paid
cin>>rate;

wages[x]=hour*rate;//this calculation determines the wages for the employees
cout<<endl;
}
for(x=0;x<=6;x++)
{
cout<<"Employee ID # : "<<empld[x]<<endl;//displays the employees ID number
cout<< "Employee is paid : "<<fixed<<setprecision(2)<<wages[x]<<endl;//displays the paid amount to the employee after calculations
cout <<endl;
}

    //Exit stage right
    return 0;
}