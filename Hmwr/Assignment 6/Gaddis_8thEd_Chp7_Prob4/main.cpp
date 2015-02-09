/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 8, 2015, 11:17 AM
 * Purpose: Homework 
 */
//User Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!
const int MONKEYS= 3;// number of monkeys
const int DAYS= 7; //number of days of the year

void getFood(float arr[][DAYS], int rows);//Function for the food each monkey have consumed, 2D array
void avgFood(float arr[][DAYS], int rows);//Function for the average amonut of food between the 3 monkies
void leastAmount(float arr[][DAYS], int rows);//Function for the least amount of food consumed, by which monkey and which day
void greatestAmount(float arr[][DAYS], int rows);//Function for the greatest amount of food consumed by which monkey and which day
int main(int argc, char** argv) {  
// Declarations.
float food[MONKEYS][DAYS]; //2D array for the food variable, for 3 MONKEY for row, for 7 days DAYS for column
        cout<<"Enter the amount of (lbs) the monkeys have consumed."<<endl;
        getFood(food, MONKEYS);
        cout<<"Report: "<<endl;
        avgFood(food, MONKEYS);
        // Get least amount in that week.
        leastAmount(food, MONKEYS);
        // Get greatest amount in that week.
        greatestAmount(food, MONKEYS);
        //Exit stage right
        return 0;
}
void getFood(float arr[][DAYS], int rows) //Function to store the 
{
for (int nRows=0; nRows<rows; nRows++)
{
        cout<<"Monkey "<<(nRows+1)<<endl;
for (int nCols=0; nCols < DAYS; nCols++)
    {
        cout<<" Day "<<(nCols+1)<<": ";
        cin>>arr[nRows][nCols];
    // Validate.
while (arr[nRows][nCols]<0)
    {
        cout<<"ERROR: food cannot be lower than 0, try again: "<<endl;;
        cin>>arr[nRows][nCols];
    }
    }
    // Separate the fields.
    cout<<endl;
}
}
//*******************************************************************
// AvgFood Function
// Gets the average food each monkey eats during the week. It
// Will then show a message on the screen.
//*******************************************************************
void avgFood(float arr[][DAYS], int rows)
{
float total = 0;// Accumulator.
    cout<<"Average food a day for "<<MONKEYS;
    cout<<" monkeys: ";
for (int nRows=0; nRows<rows; nRows++)
    {
for (int nCols=0; nCols<DAYS; nCols++)
    total+=arr[nRows][nCols];
    }
        // set formatting.
        cout<<fixed<<setprecision(2);
        cout<<(total/MONKEYS)<<" pounds."<<endl;
}
//*******************************************************************
// LeastAmount Function
// Get from each monkey the least amount of food eaten
// During the week.
//*******************************************************************
void leastAmount(float arr[][DAYS], int rows)
{
for (int nRows = 0; nRows < rows; nRows++)
{
    float least=arr[0][0];
    int day=0; // accumulator.
for (int nCols=0; nCols<DAYS; nCols++)
{
if (arr[nRows][nCols] < least)
    {
    least=arr[nRows][nCols];
    day+=(nCols+1);
    }
}
    cout<<"On day "<<day;
    cout<<" monkey "<<(nRows+1);
    cout<<" ate the least amount of food."<<endl;
}
    //Empty line
    cout<<endl;  
}
//*******************************************************************
// GreatestAmount function
//
//*******************************************************************
void greatestAmount(float arr[][DAYS], int rows)
{
for (int nRows=0; nRows<rows; nRows++)
{
float greatest=arr[0][0];
int day=0; // Accumulator.
for (int nCols=0; nCols<DAYS; nCols++)
{
if (arr[nRows][nCols]>greatest)
    {
    greatest=arr[nRows][nCols];
    day+=(nCols+1);
    }
}
    cout<<"On day "<<day;
    cout<<" monkey "<<(nRows+1);
    cout<<" ate the greatest amount of food."<<endl;
    cout<<endl;
}
    // empty line
    cout<<endl;       
}