/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on January 12, 2015, 10:56 AM
 * Purpose: Use Cmath function sin, cos, tan
 * numbers
 */

//System Library 
#include <cstdlib>//Random rand(),srand()
#include<iostream>//Keyboard/Monitor I/O
#include<fstream>//File I/O
#include<ctime>//Time functions
#include<cmath>//Math function Library
#include<iomanip>//
using namespace std;

//User Library 
 
//Global Constant 
const float PIDIV4=atan(1);
const float CNVDGRAD=PIDIV4/45;
 
//Funtion Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
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
    return 0;
}

