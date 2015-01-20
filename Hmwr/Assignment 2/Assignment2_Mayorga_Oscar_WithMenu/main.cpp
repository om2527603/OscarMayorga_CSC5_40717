/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 15, 2015, 9:00 AM
 * Purpose: Create a Program with the Problems due for Assignment 2
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
const float CMTNONS=3.527392e4f;//Conversion from Metric tons to ounces 
const float CNVLBGM=453.6;//Grams per pound
const int CNVHRMN=60;//Conversion from Hrs to Mins
const int CNVMNSC=60;//Conversion from Min to Secs
const float PIDIV4=atan(1);
const float CNVDGRAD=PIDIV4/45;


//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Savitch 8thEd Chap 2 Prob 01"<<endl;
    cout<<"Solution 2 Savitch 8thEd Chap 2 Prob 12"<<endl;
    cout<<"Solution 3 Savitch 9thEd Chap 2 Prob 01"<<endl;
    cout<<"Solution 4 savitch 9thEd Chap 2 Prob 03"<<endl;
    cout<<"Solution 5 Gaddis  7thEd Chap 3 Prob 11"<<endl;
    cout<<"Solution 6 Gaddis  7thEd Chap 3 Prob 19"<<endl;
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
            float wtPackOz;//Weight of cereal contents in ounces.
            float wtPackTn;//Weight of cereal in metric tons.
            float nPackTn;//Number of cereal boxes in a metric ton.
             //Prompt user for cereal weighs.
            cout<<"Input the number of ounces on the cereal box";
            cout<<"to convert to metric tons."<<endl;
            cout<<"Format is float ddd.ddd (ounces)"<<endl;
            cin>>wtPackOz;
            //calculate the results
            wtPackTn=wtPackOz/CMTNONS;
            nPackTn=1/wtPackTn; 
            //Output the results
            cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
            cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
            //Ask if the user would like to repeat the calculation
            cout<<"Would you like to repeat the calculation?"<<endl;
            cout<<"Type Y for yes and N for no."<<endl;
            char answer;
            cin>>answer;
            if(answer=='Y'||answer=='y'){
                //Prompt user for cereal weighs.
            cout<<"Input the number of ounces on the cereal box";
            cout<<"to convert to metric tons."<<endl;
            cout<<"Format is float ddd.ddd (ounces)"<<endl;
            cin>>wtPackOz;
            //calculate the results
            wtPackTn=wtPackOz/CMTNONS;
            nPackTn=1/wtPackTn; 
            //Output the results
            cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)"<<endl;
            cout<<"Number of cereal boxes in a metric ton => "<<nPackTn<<endl;
            }
            break;
        }
        
        
        case 2:{
            cout<<"You have chosen Solution 2"<<endl;
            //Declare variables
            float number,guess,r;
            //Input a number
            cout<<"Input a number to estimate it's square root"<<endl;
            cout<<"The format fill be a positive float"<<endl;
            cin>>number;
            //First pass
            guess=number/2;
            r=number/guess;
            guess=(guess+r)/2;
            //Output the first pass
            cout<<"First Pass calculate -> "<<guess<<endl;
            //Second pass
            r=number/guess;
            guess=(guess+r)/2;
            //Output the second pass
            cout<<"Second Pass calculate -> "<<guess<<endl;
            //Third pass
            r=number/guess;
            guess=(guess+r)/2;
            //Output the third pass
            cout<<"Third Pass calculate -> "<<guess<<endl;
            //Fourth pass
            r=number/guess;
            guess=(guess+r)/2;
            //Output the fourth pass
            cout<<"Fourth Pass calculate -> "<<guess<<endl;
             //Fifth pass
            r=number/guess;
            guess=(guess+r)/2;
            //Output the fifth pass
            cout<<"Fifth Pass calculate -> "<<guess<<endl;
             //sixth pass
            r=number/guess;
            guess=(guess+r)/2;
            //Output the sixth pass
            cout<<"sixth Pass calculate -> "<<guess<<endl;
            break;
        }
        
        
         case 3:{
            cout<<"You have chosen Solution 3"<<endl;
                     //Declare the variables
            const float CONC=1e-3f;//Sweetener concentration 
            float wtCoke=3.5e2f;//Weight of coke per gram
            float kMouse=5.0f;//Quantity of sweetener that kill the mouse 
            float wtMouse=3.5e1f;//Wt of mouse in rams 
            float kPer, wtDsPer;
            int nCans;
            //Input the desire wt of person
            cout<<"Input your desired weight in lbs"<<endl;
            cout<<"Note: grams are a mass not a weight"<<endl;
            cout<<"Format the input as a float"<<endl;
            cin>>wtDsPer;
            wtDsPer*=CNVLBGM;//convert to grams 
            //Calculation 
            kPer=kMouse/wtMouse*wtDsPer;
            nCans=kPer/wtCoke/CONC;
            //Output the limits you can drink 
            cout<<"Number of cans of diet coke ";
            cout<<"that will kill you = "<<nCans<<endl;  
            break; 
         }
         
                 
        case 4:{
            cout<<"You have chosen Solution 4"<<endl;
            //Declare variables
            float mph;//Miles per hour on a treadmill
            float hpm;//Pace as hours per mile
            float fmpm;//Miles per minute as a float
            int   impm;//Miles per minute as an integer
            float fmspm;//Fraction left for seconds per mile
            //Prompt for the input
            cout<<"How many miles are you running"<<endl;
            cout<<"in two hour?"<<endl;
            cout<<"Format answer as a float."<<endl;
            cin>>mph;
            //Calculate the relevant pace
            hpm=2/mph;
            fmpm=hpm*CNVHRMN;
            impm=static_cast<int>(fmpm);
            fmspm=(fmpm-impm)*CNVMNSC;
            //Output the result
            cout<<mph<<" (mph) = ";
            cout<<impm<<" (mins) ";
            cout<<fmspm<<" (secs) per mile"<<endl;
            break; 
         }
        
        
        case 5:{
            cout<<"You have chosen Solution 5"<<endl;
            //Declare variables and initialize
            float bcToer=164.75;   //Jan 14th, 2015 8:07am
            float MxPsToDlr=14.28;//Same Date
            float HonLemToDlr=21.0;  //Same Date
            float bitcoin,Euros,MexicanPesos,HondurasLempiras;
            //Input the number of bitcoin and then convert
            cout<<"Input the number of bitcoin "<<endl;
            cout<<"You wish to purchase."<<endl;
            cin>>bitcoin;
            //Convert to all the currencies
            Euros=bcToer*bitcoin;
            MexicanPesos=MxPsToDlr*Euros;
            HondurasLempiras=HonLemToDlr*Euros;
            //Output the results
            cout.setf(ios::fixed);
            cout.precision(2);
            cout<<bitcoin<<" =   "<<Euros<<"(Euros)"<<endl;
            cout<<bitcoin<<" =   "<<MexicanPesos<<"(MexicanPesos)"<<endl;
            cout<<bitcoin<<" = "<<HondurasLempiras<<"(HondurasLempiras)"<<endl;
            break; 
         }
        
        
        case 6:{
            cout<<"You have chosen Solution 6"<<endl;
            //Declare variables
            float intRate=0.0319f/12;//http://www.capitalone.com/auto-financing/rates/?Log=1&EventType=Link&ComponentType=T&LOB=MTS%3A%3ALCTML6KG4&PageName=Auto+navigator&PortletLocation=4%3B16-col%3B4-1-1-1&ComponentName=content2%3B18&ContentElement=2%3BSee+Rates&TargetLob=MTS%3A%3ALCTML6KG4&TargetPageName=Auto+Loan+Rates&referer=https%3A%2F%2Fwww.capitalone.com%2Fauto-financing%2Fauto-navigator&external_id=WWW_LP058_XXX_SEM-Brand_Google_ZZ_ZZ_T_Home
            float msrplus=4e4f;      //Loan amount for Buick Avenir
            char  nPaymnt=80;        //Number of monthly payments
            //Calculate the monthly payments
            float temp=pow((1+intRate),nPaymnt);
            float mPay=intRate*temp*msrplus/(temp-1);
            //Output the inputs
            cout<<"Interest per year in percent = "<<intRate*100*12<<endl;
            cout<<"Number of payments = "<<static_cast<int>(nPaymnt)<<endl;
            cout<<"Loan Amount = $"<<msrplus<<endl;
            //Output our car payment
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"My Avenir will cost $"<<mPay<<endl;
            break; 
         }
        
        
        case 7:{
            cout<<"You have chosen Solution 7"<<endl;
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));
            //Declare a file object 
            ofstream output;
            //Open the file 
            output.open("Sin.Cos.Tan.dat");
            //Declare the angle variable as an integer
            //in degree, and the radian angle as a float
            int angDeg=rand()%361-180;//Angle [-180,180]
            float angRad=angDeg*CNVDGRAD;
            //output the angle to the screen
            cout<<"Angle in degree => "<<angDeg<<endl;
            cout<<"Angle in radian => "<<angRad<<endl;
            //Outout the sin, cos, tan
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"sin("<<angDeg<<") = "<<sin(angRad)<<endl;
            cout<<"cos("<<angDeg<<") = "<<cos(angRad)<<endl;
            cout<<"tan("<<angDeg<<") = "<<tan(angRad)<<endl;
            //Close the stream
            output.close(); 
            break; 
         }
        
        
        case 8:{
            cout<<"You have chosen Solution 8"<<endl;
            //Declare variables
            const float MAX = 300;//Maximum capacity of people that can attend 
            float Number_of_people; 
            float SpPlAv;//Number of spaces available for people  
            float NumPlExc;//Number of people that have to be excluded it
            cout<<"Enter the number of people attending the meeting: ";
            cin>>Number_of_people;

            //Calculations 
            SpPlAv=MAX-Number_of_people;
            NumPlExc=Number_of_people-MAX;

            if (Number_of_people < MAX)
            {
                cout<<"You can have a meeting legally."<<endl;
                cout<<"Make plans to make a successful meeting."<<endl;
                cout<<"You can actually invite more people."<<endl;
                cout<<"There are still ";
                SpPlAv=MAX-Number_of_people;
                cout<<SpPlAv;
                cout<<" spaces availible for more people"<<endl;
            }

            else 
            {
                cout<<"The meeting cannot be held as planned do to fire regulations."<<endl;
                cout<<"You have to exclude people to plan the meeting again."<<endl;
                cout<<"the amount of people to be exclude its: ";
                NumPlExc=Number_of_people-MAX; 
                cout<<NumPlExc<<endl;
            } 
            break; 
         }
        
        
        case 9:{
            cout<<"You have chosen Solution 9"<<endl;
            //Declare variables
    float intRate;//Interest rate 
    float FcVl;//Face Value 
    float AmtNdIt;//Amount need it for the consumer 
    float nMthPym;//Number of months to pay the loan 
    float TtlIntOw;//Total amount of interest owed
    float  MthlyPym;//Monthly payments
    float Years;//Years for the loan 
    float Intr;//Interest per month 
    //Calculations
    TtlIntOw=Years*Intr;
    Intr=intRate*AmtNdIt;
    Years=nMthPym/12;
    MthlyPym=FcVl/nMthPym;
    FcVl=TtlIntOw+AmtNdIt;
    
    cout<<"What is the interest rate?"<<endl;
    cout<<"Note: insert the interest rate as a decimal."<<endl;
    cin>>intRate; 
    cout<<"What is the Amount need it?"<<endl;
    cin>>AmtNdIt;
    cout<<"How many months are you going to be paying for the loan?"<<endl;
    cin>>nMthPym;
    cout<<"The face value is = ";
    FcVl=TtlIntOw+AmtNdIt;
    cout<<FcVl<<endl;
    cout<<"The Monthly payment would be = ";
    MthlyPym=FcVl/nMthPym;
    cout<<MthlyPym<<endl;
             
            break; 
         }
        
        
        default: cout<<"Incorrect Choice!"<<endl;
    }
    //Exit Stage Right!
    return 0;
}