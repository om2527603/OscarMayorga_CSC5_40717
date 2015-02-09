/*
* File: main.cpp
* Author: Oscar Mayorga
* Created on February 8, 2015, 5:09 PM
* Purpose: Homework 
*/

//User Libraries
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution starts here!
int searchList(int [], int, int);//linear search method
const int arraySize = 18;//constant integer variable setting array size 18, corresponds to the account numbers given by book
int searchList(int list[], int numElems, int value)
{
int index=0;//subscript to search array
int position=-1;//record position of search value
bool found=false;// boolean to indicate if the value was found, found is set to false

while(index<numElems&&!found)
{
 if (list[index]== value)//If the value is found
 {
    found=true;//Set the flag
    position=index;//Record the value's subscript
 }
index++;// Go to the next element
}

return position;// Return the position, or -1
}

int main(int argc, char** argv)
{
int tests[arraySize] = {5658845, 450125, 7895122, 8777541, //account numbers given, 18 in total
8451277,1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
1250255,1005231, 654231, 3852085, 7576651, 7881200, 4581002};

int accountN = 0; //holds the account numbers
int results = 0; //holds what # the account is in the element(inside array))

    cout<<"Please enter a valid account #"<<endl;
    cin>>accountN;
results=searchList(tests, arraySize, accountN);
if (results == -1){
    cout << "The number entered is invalid."; //Displays the number given by user is invalid, instructed by book
    cout<<endl;
}
else
{
    cout<<"The number entered is valid."; //Displays the number is valid, instructed	
    cout<<endl;
    cout<<(results)<<endl;	
}
//Exit stage right
return 0;
}
