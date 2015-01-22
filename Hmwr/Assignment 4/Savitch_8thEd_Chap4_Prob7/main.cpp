/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 21, 2015, 11:37 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2

//Function Prototype
// F            m1    m2    d
float atrForc(float,float,float);

int main(int argc, char** argv) {
    //Declare variables, Values found on Google
    float mEarth=5.972e24f;//Mass of Earth in Kilograms
    float wtMark=188.0f;//Weight of mark in lbs
    float rEarth=6.371e3;//Radius of Earth in Kilometers
    //Conversions for consistent units
    mEarth*=1e3f;//Convert to grams -> 10^3g/Kg
    float mMark=wtMark*453.59;//453.59g/lb
    rEarth*=(1e3f*1e2f);//10^3m/km*10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mMark,rEarth);
    float lbs=dynes*1/4.44822e5f;//Conversion 1lb/4.4dynes
    //Output the results
    cout<<"My weight in dynes = "<<dynes<<endl;
    cout<<"My weight in lbs = "<<lbs<<endl;
    //Exit stage right
    return 0;
}

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
}

