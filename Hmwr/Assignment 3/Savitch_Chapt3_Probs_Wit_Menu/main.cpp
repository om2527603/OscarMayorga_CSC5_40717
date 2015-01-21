/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 21, 2015, 8:49 AM
 * Purpose: Create a Program with the Problems due for Assignment 3
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
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Savitch 8thEd Chap 3 Prob 07"<<endl;
    cout<<"Solution 2 Savitch 8thEd Chap 3 Prob 19"<<endl;
    cout<<"Solution 3 Savitch 9thEd Chap 3 Prob 01"<<endl;
    cout<<"Solution 4 Savitch 9thEd Chap 3 Prob 04"<<endl;
    cout<<"Solution 5 Savitch 9thEd Chap 3 Prob 07"<<endl;
    cout<<"Solution 6 Savitch 9thEd Chap 3 Prob 08"<<endl;
    cout<<"Solution 7 Gaddis  7thEd Chap 3 Prob 22"<<endl;
    cout<<"Solution 8 savitch 9thEd Chap 2 Prob 05"<<endl;
    cout<<"Solution 9 savitch 9thEd Chap 2 Prob 04"<<endl;

    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 1:{
        cout<<"You have choosen Solution 1"<<endl;
        //Declare variables
                unsigned short number;
                //Prompt the user
                cout<<"Input a number from 0 to 3999"<<endl;
                cin>>number;
                //Determine the number of 1000's
                char thousands=(number-number%1000)/1000;
                //Output the thousands in Roman Numerals
                switch(thousands){
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    case 1:cout<<"M";break;
                    default:;
                }
                //Determine the number of 100's
                number-=thousands*1000;
                char hundreds=(number-number%100)/100;
                //Output the 100's in Roman Numerals
                switch(hundreds){
                    case 9: cout<<"CM"; break;
                    case 8: cout<<"DCCC";break;
                    case 7: cout<<"DCC";break;
                    case 6: cout<<"DC";break;
                    case 5: cout<<"D";break;
                    case 4: cout<<"CD";break;
                    case 3: cout<<"C";
                    case 2: cout<<"C";
                    case 1:cout<<"C";break;
                    default:;
                }
                //Determine the number of 10's
                number-=hundreds*100;
                char tens=(number-number%10)/10;
                //Output the 100's in Roman Numerals
                switch(tens){
                    case 9: cout<<"XC"; break;
                    case 8: cout<<"LXXX";break;
                    case 7: cout<<"LXX";break;
                    case 6: cout<<"LX";break;
                    case 5: cout<<"L";break;
                    case 4: cout<<"XL";break;
                    case 3: cout<<"X";
                    case 2: cout<<"X";
                    case 1: cout<<"X";break;
                    default:;
                }
                //Determine the number of 1's
                number-=tens*10;
                char ones=number;
                //Output the 100's in Roman Numerals
                switch(ones){
                    case 9: cout<<"IX"; break;
                    case 8: cout<<"VIII";break;
                    case 7: cout<<"VII";break;
                    case 6: cout<<"VI";break;
                    case 5: cout<<"V";break;
                    case 4: cout<<"IV";break;
                    case 3: cout<<"I";
                    case 2: cout<<"I";
                    case 1: cout<<"I";break;
                    default:;
                }
            break;
        }
        
        
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
            //Declare variables
            char thPick=23;
            bool computer;
            short nPckRmv;

            //Playing the game
            do{
                //Designate the player
                computer=false;
                //Ask player how many tooth picks to remove
                do{
                    cout<<"There are "<<static_cast<int>(thPick)<<" left to remove"<<endl;
                    cout<<"How many tooth picks do you want to remove"<<endl;
                    cout<<"Choose 1,2, or 3"<<endl;
                    cin>>nPckRmv;
                }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
                //Remove the number of toothpicks
                thPick-=nPckRmv;
                //Designate the computer
                computer=true;
                //Utilize logic from the book
                if(thPick>4){
                    nPckRmv=4-nPckRmv;
                    thPick-=nPckRmv;
                }else if(thPick>=2&&thPick<=4){
                    thPick=1;
                }else if(thPick==1){
                    thPick=0;
                    computer=false;
                }
            }while(thPick>1);

            //Output the winner and loser
            switch(static_cast<int>(computer)){
                case 1:{
                    cout<<"Computer wins you lose"<<endl;
            break;
        }
        default: 
                cout<<"Computer loses we win"<<endl;
    }
    
    //Exit the Game
            break;
        }
        
        
         case 3:{
            cout<<"You have chosen Solution 3"<<endl;
              //Declare the variables 
    float LngCl;//Length of the call
    float tlCost1,tlCost2,tlCost3;//Total cost of call
    
    
    //Days of the week 
    cout<<"Solution 1 Mo, Tu, We, Th, Fr(8:00am-6:00pm)"<<endl;
    tlCost1=LngCl*40/100;
    cout<<"Solution 2 Mo, Tu, We, Th, Fr(6:00pm-8:00pm)"<<endl;
    tlCost2=LngCl*25/100;
    cout<<"Solution 3 Sa, Su(All Day)"<<endl;
    tlCost3=LngCl*15/100;

    cout<<"Input the solution you want to see according";
    cout<<"to the day and time the call was made: "<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        
        case 1:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost1=LngCl*40/100;
            cout<<tlCost1;
            cout<<" Dollars."<<endl;
         }
            break;
        case 2:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost2=LngCl*25/100;
            cout<<tlCost2;
            cout<<" Dollars."<<endl;
         }
            break;
        case 3:{
            cout<<"Enter the length of the call in minutes: ";
            cin>>LngCl;
            cout<<"The total cost of your call is: ";
            tlCost3=LngCl*15/100;
            cout<<tlCost3;
            cout<<" Dollars."<<endl;

         }
            break;
        }
    
            break; 
         }
         
                 
        case 4:{
            cout<<"You have chosen Solution 4"<<endl;
            //Declare the variables 
            float VlofCrd;//Value of the card
            float TlScr2,TlScr3,TlScr4,TlScr5;//Total Score
            float Fcard,Scard,Tcard,Focard,Ficard;//Number of Cards 2-5

            //Calculations 
            TlScr2=Fcard+Scard;
            TlScr3=Fcard+Scard+Tcard;
            TlScr4=Fcard+Scard+Tcard+Focard;
            TlScr5=Fcard+Scard+Tcard+Focard+Ficard;

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
                    cout<<"if is an A enter your choice of 1 or 11"<<endl;
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
            
            break; 
         }
        
        
        case 5:{
            cout<<"You have chosen Solution 5"<<endl;
            //Declare variables
                float exactEx;//Exact value of x
                float approxEx=1,x;//Approximate value of x
                float term=1;
                float tol=1e-6f;
                int count;
                //Prompt the user for input
                cout<<"Calculate e^x"<<endl;
                cout<<"Input the value of x"<<endl;
                cin>>x;
                //Calculate the approximate e^x
                for(count=1;term>tol;term*=x/count,approxEx+=term,count++){
                    //term*=x/count;
                    //approxEx+=term;
                }
                //Calculate the exact value of e^x
                exactEx=exp(x);
                //Compare the exact with approximate
                cout<<"The exact value  = "<<exactEx<<endl;
                cout<<"The approx value = "<<approxEx<<endl;
                cout<<"The number of terms use = "<<count<<endl;
                //Exit Stage Right!
            break; 
         }
        
        
        case 6:{
            cout<<"You have chosen Solution 6"<<endl;
            //Declare Variables
            float approxPi=1.0f;
            unsigned int terms=1;
            unsigned int nTerms;//Number of Terms
            //Prompt user for number of terms to use
            do{
                cout<<"How many terms in series to use?"<<endl;
                cout<<"Choose an odd number integer < 2^32 !"<<endl;
                cin>>nTerms;
            }while(!(nTerms%2));
            //Calculate the approximate value of PI
            for(unsigned int denom=3;terms<=nTerms;denom+=4,terms+=2){
                approxPi+=(-1.0f/(denom)+1.0f/(denom+2));
            }
            approxPi*=4;
            //Output the result
            cout<<"Exact value of PI = "<<PI<<endl;
            cout<<"Approximate value of PI = "<<approxPi<<endl;
            //Exit Stage Right
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