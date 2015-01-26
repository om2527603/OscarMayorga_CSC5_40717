/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 26, 2015, 10:12 AM
 * Purpose: Create a Program with the Problems due for Assignment 4
 */

//System Libraries
#include <cstdlib>//Random rand(),srand()
#include <iostream>//Keyboard/Monitor I/O
#include <iomanip>
#include <cmath>//Math function Library
#include<fstream>//File I/O
#include<ctime>//Time functions
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2
float atrForc(float,float,float);
float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Gaddis 7thEd Chap 5 Prob 07"<<endl;
    cout<<"Solution 2 Gaddis 7thEd Chap 5 Prob 11"<<endl;
    cout<<"Solution 3 Gaddis 7thEd Chap 5 Prob 22"<<endl;
    cout<<"Solution 4 Savitch 8thEd Chap4 Prob 07"<<endl;
    cout<<"Solution 5 Savitch 9thEd Chap4 Prob 07"<<endl;
    cout<<"Solution 6 Savitch 9thEd Chap  Prob 0"<<endl;
    cout<<"Solution 7 Savitch thEd Chap  Prob 0"<<endl;
    cout<<"Solution 8 savitch 9thEd Chap  Prob 0"<<endl;
    cout<<"Solution 9 savitch 9thEd Chap  Prob 0"<<endl;

    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 1:{
            //Declare variables
    unsigned int salary=1;//Integer number of pennies
    unsigned int totPay=salary;//Total pay after n days
    unsigned short numDays;//Number of days to double
    //Output the number of days to double your wallet
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day ";
    cout<<" your salary =  $"<<setw(11)<<salary/100.0f<<endl;
    //Calculate the result
    for(int day=2;day<=numDays;day++){
        //salary*=2;
        salary<<=1;
        totPay+=salary;
        cout<<"After "<<setw(2)<<day<<" days ";
        cout<<" your salary =     $"<<setw(11)<<salary/100.0f<<endl;
    }
    //Output the result
    cout<<"After "<<setw(2)<<numDays<<" days ";
    cout<<" your total pay =  $"<<setw(11)<<totPay/100.0f<<endl;
    //Exit Stage Right!

            break;
        }
        
        
        case 2:{
             //Declare variables
    float avg, min, max, input;
    //Read in the first data point
    cout<<"What is Judge #1's score!"<<endl;
    cin>>input;
    avg=max=min=input;
    //For loop to read in the next 4 values
    for(int readin=2;readin<=5;readin++){
        cout<<"What is Judge #"<<readin<<"'s score!"<<endl;
        cin>>input;
        if(max<input)max=input;
        if(min>input)min=input;
        avg+=input;
    }
    //Calculate the average
    avg=(avg-min-max)/3;
    //Output the result
    cout<<"The average = "<<avg<<endl;
    //Exit Stage Right!
           
            break;
        }
        
        
         case 3:{
           //Declare a variable
    int widHght;
    //Prompt for the input
    cout<<"How large do you want the character square"<<endl;
    cin>>widHght;
    //Utilize countable loops
    cout<<endl;
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right
    
            break; 
         }
         
                 
        case 4:{
            //Declare variables, Values found on Google
    float mEarth=5.972e24f;//Mass of Earth in Kilograms
    float wtOscar=168.0f;//Weight of mark in lbs
    float rEarth=6.371e3;//Radius of Earth in Kilometers
    //Conversions for consistent units
    mEarth*=1e3f;//Convert to grams -> 10^3g/Kg
    float mOscar=wtOscar*453.59;//453.59g/lb
    rEarth*=(1e3f*1e2f);//10^3m/km*10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mOscar,rEarth);
    float lbs=dynes*1/4.44822e5f;//Conversion 1lb/4.4dynes
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    //Exit stage right
        
            break; 
         }
        
        
        case 5:{
             //Declare Variables
    int strHrs,strMins,strIsAm=false;
    int endHrs,endMins,endIsAm=false;
    char ap,dummy;
    //Prompt for the start time
    cout<<"Input the Start Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>strHrs>>strMins>>ap>>dummy;
    if(ap=='A'||ap=='a')strIsAm=true;
    //Prompt for the end time
    cout<<"Input the End Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    if(ap=='A'||ap=='a')endIsAm=true;
    //Calculate the minutes for each
    if(!strIsAm)strHrs+=12;
    int strTime=strHrs*60+strMins;
    if(!endIsAm)endHrs+=12;
    int endTime=endHrs*60+endMins;
    int diffMin=endTime-strTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    //Output the results
    cout<<"The difference in Time = ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"
        <<(min<10?'0':'\0')<<min<<endl;
    //Exit Stage Right
            
            break; 
         }
        
        
        case 6:{
            
            break; 
         }
        
        
        case 7:{
            cout<<"You have chosen Solution 7"<<endl;
            
            break; 
         }
        
        
        case 8:{
            cout<<"You have chosen Solution 8"<<endl;
            
            break; 
         }
        
        
        case 9:{
            cout<<"You have chosen Solution 9"<<endl;
           
             
            break; 
         }
        
        
        default: cout<<"Incorrect Choice!"<<endl;
    }
    //Exit Stage Right!
    return 0;
}

