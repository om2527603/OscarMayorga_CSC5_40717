/*
* File: main.cpp
* Author: Oscar Mayorga
* Created on February 6, 2015, 9:15 PM
* Purpose: Homework Gaddis_Chap7_Prob13
*/

//User Libraries
#include <iostream>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constant

//Function Prototype

//Execution begins here!

int main(int argc, char** argv) {
    
       int lottery[5]; //array holds the 5 numbers for lottery
       int user[5]; //array holds the 5 numbers the user will input
       bool allmatch= true;//boolean statement setting all match = true
       bool nomatch= true; //boolean statement for no match = true
       int matchcount= 0;  //holds match count setting it to 0
  srand(time(NULL));
      lottery[0]=rand()%20;//setting array 0-4 (5 numbers) rand to 20%
      lottery[1]=rand()%20;
      lottery[2]=rand()%20;
      lottery[3]=rand()%20;
      lottery[4]=rand()%20;

  for(int i=0; i<5; i++)
  {
     cout<<"Enter a number between 0 and 9: ";
     cin>>user[i]; //holders the user's input

  while(user[i]<0||user[i]>9) //the user cannot use a negative number (less than 0)
// and the digit cannot pass over number 9 (i.e 11,22,33 etc...)
    {
     cout << "Error! Entry must be between 0 and 9: "; //input validation
     cin >> user[i];
    }
  }
cout<<endl<<"Lottery array: "; //lottery array will display the lottery numbers
                               //as instructed by book
  for(int i=0; i<5; i++)
  {
     cout<<lottery[i];
     cout<<"|";
  }
     cout<<"User array: "; //as instructed by book, User array will display what numbers user entered in
  for(int i=0; i<5; i++)
  {
     cout<<user[i]; //outputs the user array, for better comparison against the actual lottery numbers(lottery array)
     cout<<"|";
  }
  for(int i=0; i<5; i++)
  {
  if(user[i] ==lottery[i])
         {
           matchcount++;
           nomatch = false;
         }
  if(user[i] != lottery[i])
         {
           allmatch = false;
         }
  }
  if(nomatch == true)//as indicated up above, nomatch was set to true, user numbers for lottery has no match
         {
     cout<<endl<<endl<<"Sorry! Numbers do not match, Try again!"<<endl;
         }
  if(allmatch == true) //boolean statement above, if all match is true, user will have won the lottery, as numbers match.
         {
     cout<<endl<<endl<<"**CONGRATULATIONS! YOU ARE THE GRAND PRIZE WINNER**"<<endl;
         }
  if(matchcount != 0)
     cout<<endl<<endl<<matchcount<<" Match"<<endl;
       
     return 0;
}
