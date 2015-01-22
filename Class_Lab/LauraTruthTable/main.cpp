/* 
 * File:   main.cpp
 * Author: Oscar Mayorga/Class_Example_From_Laura Herrera*
 * Created on January 13, 2015, 8:00 PM
 * Purpose: In Class Assignment - Truth Table
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Output the Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X!(X||Y)!X&&!Y!(X&&Y) !X||!Y"<<endl;
    //Loop on all possible values of X and Y
    for(int X=1;X>=0;X--){
        for(int Y=1;Y>=0;Y--){
            cout<<(X?'T':'F')<<" ";
            cout<<(Y?'T':'F')<<"  ";
            cout<<(!X?'T':'F')<<"  ";
            cout<<(!Y?'T':'F')<<"   ";
            cout<<(X&&Y?'T':'F')<<"    ";
            cout<<(X||Y?'T':'F')<<"   ";
            cout<<(X^Y?'T':'F')<<"    ";
            cout<<(X^Y^Y?'T':'F')<<"    ";
            cout<<(X^Y^X?'T':'F')<<"      ";
            cout<<(!(X||Y)?'T':'F')<<"      ";
            cout<<(!X&&!Y?'T':'F')<<"       ";
            cout<<(!(X&&Y)?'T':'F')<<"      ";
            cout<<(!X||!Y?'T':'F')<<"       ";
            cout<<endl;
        }
    }
    //Exit stage right!
    return 0;
}

