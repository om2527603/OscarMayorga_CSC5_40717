/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 13, 2015, 9:15 AM
 * Purpose: Illustrate file i/o and random 
 * numbers
 */

//System Library 
#include<iostream>

using namespace std;

//User Library 
 
//Global Constant 
 
//Funtion Prototype

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare 2 boolean variables 
    bool X,Y;
   //Output the heading
    
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Fill in the first row
    X=true;Y=true;
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<" ";
        cout<<(!X?'T':'F')<<" ";
        cout<<(!Y?'T': 'F')<<" ";
        cout<<(X&&Y?'T':'F')<<" ";
        cout<<(X||Y?'T': 'F')<<" ";
        cout<<(X^Y? 'T':'F')<<" ";
        cout<<((X^Y)^Y? 'T':'F')<<" ";
        cout<<((X^Y)^X? 'T':'F')<<" ";
        cout<<(!X||Y?'T': 'F')<<" ";
        cout<<(!X&&!Y?'T': 'F')<<" ";
        cout<<(!(X&&Y)?'T': 'F')<<" ";
        cout<<(!X||!Y?'T': 'F')<<" ";
        cout<<endl;
        
    //Fill the second row
    Y=false;
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<" ";
        cout<<(!X?'T':'F')<<" ";
        cout<<(!Y?'T': 'F')<<" ";
        cout<<(X&&Y?'T':'F')<<" ";
        cout<<(X||Y?'T': 'F')<<" ";
        cout<<(X^Y? 'T':'F')<<" ";
        cout<<((X^Y)^Y? 'T':'F')<<" ";
        cout<<((X^Y)^X? 'T':'F')<<" ";
        cout<<(!X||Y?'T': 'F')<<" ";
        cout<<(!X&&!Y?'T': 'F')<<" ";
        cout<<(!(X&&Y)?'T': 'F')<<" ";
        cout<<(!X||!Y?'T': 'F')<<" ";
        cout<<endl;
        
    //Fill the third row
    X=false;Y=false;
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<" ";
        cout<<(!X?'T':'F')<<" ";
        cout<<(!Y?'T': 'F')<<" ";
        cout<<(X&&Y?'T':'F')<<" ";
        cout<<(X||Y?'T': 'F')<<" ";
        cout<<(X^Y? 'T':'F')<<" ";
        cout<<((X^Y)^Y? 'T':'F')<<" ";
        cout<<((X^Y)^X? 'T':'F')<<" ";
        cout<<(!X||Y?'T': 'F')<<" ";
        cout<<(!X&&!Y?'T': 'F')<<" ";
        cout<<(!(X&&Y)?'T': 'F')<<" ";
        cout<<(!X||!Y?'T': 'F')<<" ";
        cout<<endl;
        
     //Fill the fourth row
    X=false;Y=false;
        cout<<(X?'T':'F')<<" ";
        cout<<(Y?'T':'F')<<" ";
        cout<<(!X?'T':'F')<<" ";
        cout<<(!Y?'T': 'F')<<" ";
        cout<<(X&&Y?'T':'F')<<" ";
        cout<<(X||Y?'T': 'F')<<" ";
        cout<<(X^Y? 'T':'F')<<" ";
        cout<<((X^Y)^Y? 'T':'F')<<" ";
        cout<<((X^Y)^X? 'T':'F')<<" ";
        cout<<(!X||Y?'T': 'F')<<" ";
        cout<<(!X&&!Y?'T': 'F')<<" ";
        cout<<(!(X&&Y)?'T': 'F')<<" ";
        cout<<(!X||!Y?'T': 'F')<<" ";
        cout<<endl;   
    //Exit stage right! 
    return 0;
}

