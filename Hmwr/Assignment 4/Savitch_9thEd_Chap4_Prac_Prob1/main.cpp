/* 
* File: main.cpp
* Author: Oscar Mayorga
*
* Created on January 21, 2015, 7:42 AM
*/

#include <iostream>
#include <string>
using namespace std; 

const float LITGAL=.264179;//liters per gallon

float fnMPG (float, float);

int main(int argc, char** argv) {
float litogas;
float carmile;
float galogas;
float mpg;
string repeat;
cout << "I can find your car's mpg." << endl;
do{
cout << "How many liters of gasoline has your car consumed? : ";
cin >> litogas;
cout << "And how far (in miles) have you driven? : ";
cin >> carmile;
galogas = litogas*LITGAL;
mpg = fnMPG (carmile,galogas);
cout << "Your current mpg is " << mpg << " miles per gallon." << endl;
cout << "Would you like to calculate another mpg? (Y/N) : ";
cin >> repeat;
}while(repeat!="N");
cout << "Have a nice day." << endl;
return 0;
}

float fnMPG (float x,float y){
return x/y;
}


