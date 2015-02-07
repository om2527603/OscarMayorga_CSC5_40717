/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 6, 2015, 7:23 PM
 * Purpose: Homework Gaddis_8thEd_Chp7_Prob2
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
float avgRainfall= 0; //Holds average rainfall
float ttlRainfall= 0; //Holds the total rainfall
float lwstRainfall; //Holds the lowest rainfall
float highestRf; //Holds the highest rainfall
string lwstMonth; //Holds the name of the month that has the lowest rainfall
string highestMonth; //Holds the name of the month that has the highest rainfall
string monthNames[]= {"January", "February", "March", "April", "May", 
                       "June", "July", "August", "September", "October",    
                       "November", "December"};//string array holds the name of all 12 months
float monthlyTtls[12]; //holds the rainfall in an array given by user
char repeat; //char for restarting the program if user chooses Y/y

	do
	{
		cout<<"Enter the rainfall inches for each months of the year: "<<endl;


            //positive number validation as instructed by book
        for(int i= 0; i<12; i++)
        {
                cout<<monthNames[i]<<": ";
                cin>>monthlyTtls[i];

        while(monthlyTtls[i]<0)
            {
                cout<<"Please enter a positive number for "<<monthNames[i]<<endl;
                cin>>monthlyTtls[i];
            }
        }	
		
	
		//for loop i is set to 0 and i is less than 12
        for(int i=0; i<12; i++)
            {
                ttlRainfall= ttlRainfall+monthlyTtls[i];//adds the total rainfall for the months
            }

		//Averages out the total rainfall and divide it by the number of months
		avgRainfall= ttlRainfall/12;

		//Highest and Lowest months of rainfall [0]
                highestRf= monthlyTtls[0];
                highestMonth= monthNames[0];
                lwstRainfall= monthlyTtls[0];
                lwstMonth= monthNames[0];

        for(int i=0; i<12; i++)
        {
        if(monthlyTtls[i]>highestRf) 
            {
                highestRf=monthlyTtls[i]; 
                highestMonth=monthNames[i];
            }

        if(monthlyTtls[i]<lwstRainfall)
            {
                lwstRainfall = monthlyTtls[i];
                lwstMonth = monthNames[i];
            }
        }	
	
		//displays the total rainfall and average in inches,
                //displays the lowest and highest month as well as their respective total of rainfall from lowest to highest
		cout<<"The total rainfall throughout the year was "<<endl;
                cout<<ttlRainfall<<" inches."<<endl;
		cout<<"The average rainfall for the entire year is "<<endl;
                cout<<avgRainfall<<" inches."<<endl;
		cout<<"The month with the lowest rainfall is "<<endl;
                cout<<lwstMonth<<", with a total of "<<endl;
                cout<<lwstRainfall <<" inches."<<endl;
		cout<<"The month with the highest rainfall is "<<endl;
                cout<<highestMonth<<", with a total of "<<highestRf<<" inches."<<endl;

		//setting the values back to 0 if the user decides to run the program once more.
		avgRainfall=0;
		ttlRainfall=0;
		lwstRainfall=0;
		highestRf=0;
		highestMonth;
		lwstMonth;

                cout<<endl;
		cout<<"Would you like to run the program again? (Y/N) ";
		cin>>repeat;
		cout<<endl;
	}while(repeat =='y'|| repeat =='Y'); // while-loop,user can enter either 'Y' or 'y' when prompted by program

	return 0;
}
