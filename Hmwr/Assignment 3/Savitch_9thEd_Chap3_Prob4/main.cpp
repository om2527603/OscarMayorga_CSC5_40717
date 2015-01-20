/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 19, 2015, 4:21 PM
 */

//System Library 
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare the variables 
    float VlofCrd;//Value of the card
    float TlScr2,TlScr3,TlScr4,TlScr5;//Total Score
    float Fcard,Scard,Tcard,Focard,Ficard;//Number of Cards 2-5
 
    //Calculations 
    TlScr2=Fcard+Scard;
    TlScr3=Fcard+Scard+Tcard;
    TlScr4=Fcard+Scard+Tcard+Focard;
    TlScr5=Fcard+Scard+Tcard+Focard+Ficard;
    top:
    //Number of cards 
    cout<<"2 cards "<<endl; 
    cout<<"3 cards "<<endl;
    cout<<"4 cards "<<endl;
    cout<<"5 cards "<<endl;
    cout<<"Input the Number of cards you have: "<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 2 :{ //(2 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            TlScr2=Fcard+Scard;
            
            if (TlScr2 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr2<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                }
        }
            break;
            
        case 3 :{ //(3 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;

            TlScr3=Fcard+Scard+Tcard;
            
            if (TlScr3 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr3<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
            
        case 4 :{ //(4 cards)
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;
            cout<<"What is the value of your fourth cards: ";
            cin>>Focard;
            TlScr4=Fcard+Scard+Tcard+Focard;
            
            if (TlScr4 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr4<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
            
        case 5 :{ //(5 cards) 
            cout<<"Note: If card is a Jack, Queen or King enter 10"<<endl;
            cout<<"if is a A enter your choice of 1 or 11"<<endl;
            cout<<"What is the value of your first cards: "<<endl;
            cin>>Fcard;
            cout<<"What is the value of your second cards: ";
            cin>>Scard;
            cout<<"What is the value of your third cards: ";
            cin>>Tcard;
            cout<<"What is the value of your fourth cards: ";
            cin>>Focard;
            cout<<"What is the value of your fifth cards: ";
            cin>>Ficard;
            TlScr5=Fcard+Scard+Tcard+Focard+Ficard;
            
            if (TlScr5 <= 21)
            {
                cout<<"Your total score is: ";
                cout<<TlScr5<<endl;
            }
            else {
                cout<<"BUSTED :p"<<endl;
                 }
        }
            break;
    }
    goto top;
    
    return 0;
}