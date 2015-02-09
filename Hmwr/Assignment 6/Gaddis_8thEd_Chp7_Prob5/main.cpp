/* File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 8, 2015, 1:31 PM
 * Purpose: Homework 
 */

//User Libraries
#include <iostream>
#include <fstream>
using namespace std;
//User Libraries

//Global Constant

//Function Prototype

//Execution starts here!
const int MONTHS=3;//For this problem we will use constant integers for 3 summer months
const int DAYS=30; //And as well as for the 30 days ***note that 31st day is not allocated, by Gaddis book

void readDataFromFile(char arr[][DAYS], int size);//Function for reading in the data file "RainOrShine.txt:
void showMonthlyReport(char arr[][DAYS], int size);//Function to store weather patterns for each month
void showTotalReport(int rainy, int cloudy, int sunny);//Function to allocate in what days were Rainy,cloudy,and sunny
void monthWithMostRain(char arr[][DAYS], int size);//Function for the month with the largest amount of rain

/*
 * 
 */
int main(int argc, char** argv) {
    //Declares string for months and days 2D Array
    char weatherStatistics[MONTHS][DAYS];
    //fstream reading from file "RainOrShine.text"
    readDataFromFile(weatherStatistics, MONTHS);
    //Displays the monthly weather report
    showMonthlyReport(weatherStatistics, MONTHS);
    //Month with the largest amount if rain
    monthWithMostRain(weatherStatistics, MONTHS);
    //Exit stage right
    return 0;
}

void readDataFromFile(char arr[][DAYS], int size) //Function for reading in data from file
{                                                 //the data stored in file was given by book
// Open file.
ifstream inputFile("RainOrShine.text");//the txt file has three rows representing the 3 months of summer
if (!inputFile)// it then has 30 days indicating R for rainy, C for cloudy, S for sunny
{ //note**no information of weather was collected for the 31st day(from book)
    cout<<"ERROR: cannot find/read file."<<endl;
}
    //Read data.
for (int nRow=0; nRow<size; nRow++)
{
for (int nCol=0; (nCol<DAYS) && (inputFile>>arr[nRow][nCol]); nCol++)
{
//
}       
}
    inputFile.close();   
}
     
//ShowMonthlyReport function
//This void function will store in how many days (30) weather patterns occurred for the summer months
void showMonthlyReport(char arr[][DAYS], int size)
{
//Pass by value to next function.
    static int totalRainy=0;
    int totalCoudy=0;
    int totalSunny=0;
    int totalMismatch=0;
        cout<<"REPORTS HOW MANY DAYS IN THE SUMMER MONTHS WERE RAINY, CLOUDY, OR SUNNY:\n";
     
for (int nRows=0; nRows<size; nRows++)
{
    // counters.
    int rainy=0;
    int cloudy=0;
    int sunny=0;
    int mismatch=0;
for (int nCols=0; nCols<DAYS; nCols++)
{
    //Checks for rainy, cloudy or sunny.
if (arr[nRows][nCols]=='R')
{
    rainy++;
    totalRainy++;
}
else if ((arr[nRows][nCols]=='C'))
{
    cloudy++;
    totalCoudy++;
}
else if ((arr[nRows][nCols]=='S'))
{
    sunny++;
    totalSunny++;
}
else
{
    mismatch++;
    cout<<"ERROR: inaccurate results! Found ";
    cout<<mismatch<<" mismatched character(s)"<<endl;
    totalMismatch++;
}
}
               
    cout<<"Month "<<(nRows+1);//this will display the monthly report of weather patterns
    cout<<": Rain ("<<rainy;
    cout<<") - Cloudy ("<<cloudy;
    cout<<") - Sunny ("<<sunny;
    cout<<")"<<endl;
}
    //Send
    showTotalReport(totalRainy, totalCoudy, totalSunny);
}
     
    //ShowTotalReport function
    //Get data from showMonthlyReport and show totals.
void showTotalReport(int rainy, int cloudy, int sunny)
{
    cout<<endl;
    cout<<"STATISTICS READ FROM TXT FILE"<<endl;
    cout<<"Rain("<<rainy;
    cout<<")-Cloudy("<<cloudy;
    cout<<")-Sunny("<<sunny;
    cout<<")"<<endl;
} 
    // monthWithMostRain function
    //from this we will be able to determine which month had the largest amount of rain, as instructed by book
void monthWithMostRain(char arr[][DAYS], int size)
{
    char months[3][7]={"June", "July", "August"};//3 by 7 
    int subscript=-1;
    int rainy=0;
    int highest=0;

for (int nRows=0; nRows<size; nRows++)
{
for (int nCols=0; nCols<DAYS; nCols++)
{                      
// check if rainy.
if (arr[nRows][nCols]=='R')//Rainy
{
    rainy++;
}
}
// checks for the highest amount of rainy days
if (rainy>highest)
{
    highest=rainy;
    subscript++;
}
rainy=0;
}
    cout<<endl;     
    cout<<"The month "<<months[subscript]<<" had the largest amount of rain."<<endl;
    }//this will display which month had the largest amount of rain