/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on February 6, 2015, 1:54 PM
 * Purpose: Homework Gaddis 8thEd Cha7 Prob 1
 */

//User Libraries
#include <iostream>

using namespace std;


//User Libraries

//Global Constant
const int Numb = 10; //constant set as an integer Num = 10

//Function Prototype

//Execution starts here!

int main(int argc, char** argv) {

int mn; //holds the smallest value
int mx; //holds the largest value
int a[Numb]; //holds the 10 values in array

for(int i=0;i<10;i++) //sorts out the given values
{
cout<< "Enter the values one after the other(max of 10): ";
cin>> a[i]; //sets the given values by user into an array
}
        //setting both largest and smallest values array [0]
        mn=a[0]; 
        mx=a[0];
        for(int i=1;i<10;i++)
	{
if(mn>a[i]) //if smallest value is greater[i] then smallest value equals array value
    {
        mn=a[i];
    }
else if(mx<a[i]) //else if largest value is less than [i] then max value equals array value
    {
        mx = a[i];
    }
	}

cout<<"The largest number is: "<< mx << endl; //displays the max value
cout<<"The smallest number is: "<< mn << endl; //displays the smallest value
    
    //Exit stage right
    return 0;
}

