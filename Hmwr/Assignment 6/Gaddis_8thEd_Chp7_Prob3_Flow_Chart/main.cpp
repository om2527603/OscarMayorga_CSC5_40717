/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 7, 2015, 11:06 AM
 * Purpose: Homework Gaddis_8thEd_Chap7_Prob3
 */

//User Libraries
#include <iostream>
#include <string> 


using namespace std;

//User Libraries

//Global Constant

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    
string names[5];
int sales[5]; //0-5 array for the # of jars sold
int i; //In an array 
int HighSell=0; //Setting the highest salsa sold to 0
int HiName;  //Holds the highest selling salsa name
int LowSell=0; //Holds the lowest selling salsa sold to 0
int LowName; //Holds the lowest selling salsa name
int total=0; //Holds the total number of jars (salsa) sold
//Declare variables
names[0]="Mild"; //These are the 5 salsa names 
names[1]="Medium";
names[2]="Sweet";
names[3]="Hot";
names[4]="Zesty";

for (i=0;i<=4;i++)
{ //Prompt the user to enter in the number of jars sold for each salsa flavor
    cout<<"Enter number of Jars "<<names[i]<<" sold: ";
    cin>>sales[i];//It is then stores as i in the array
    total=total+sales[i]; //Calculations will add total to the amount of sales in array 
if (i==0) //Setting i to 0
{  
    //setting the salsa names/sales with the lowest and highest sold = i
    HighSell=sales[i]; HiName=i; LowSell=sales[i]; LowName=i;  
} 
if (HighSell<sales[i]) 
    {    
    HighSell=sales[i]; HiName=i; 
    }
if (LowSell>sales[i]) 
    { 
    LowSell=sales[i]; LowName=i; 
    }
}
cout<<"The number of jars sold for each salsa are: "<<endl;
for (i=0;i<=4;i++){ //For loop to display the # of jars sold
cout<<sales[i]<<" "<<names[i]<<" jars"<<" "<<endl; //Sales-salsa names
}
//Displays the total sales and also the highest , and lowest selling salsa
//From if statements we can determine what were the names of both high or low selling salsa and the sales (i=0)
cout<<"The total sales: "<<total<<" jars"<<endl;
cout<<"The highest sales: "<<HighSell<<" ("<<names[HiName]<<" salsa)"<<endl;
cout<<"The lowest sales: "<<LowSell<<" ("<<names[LowName]<<" salsa)"<<endl; 

    //Exit stage right!
    return 0;
}
