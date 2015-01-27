/* 
* File: main.cpp
* Author: Oscar Mayorga

* Created on January 23, 2015, 11:25 AM
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
float litogas2;
float carmile2;
float galogas2;
float mpg2;
string repeat;
cout << "I can find two car's mpgs and compare them." << endl;
do{
cout << "How many liters of gasoline has the first car consumed? : ";
cin >> litogas;
cout << "And how far (in miles) has that car driven? : ";
cin >> carmile;
galogas = litogas*LITGAL;
mpg = fnMPG (carmile,galogas);
cout << "How many liters of gasoline has the second car consumed ? : ";
cin >> litogas2;
cout << "And how far (in miles) has that car driven? : ";
cin >> carmile2;
galogas2 = litogas2*LITGAL;
mpg2 = fnMPG (carmile2,galogas2);
cout << "The current mpg of the first car is " << mpg << " miles per gallon." << endl;
cout << "While the current mpg of the second car is " << mpg2 << " miles per gallon." << endl;
if(mpg>mpg2){
cout << "Clearly, your first car is more fuel efficient." << endl;
}else if(mpg<mpg2){
cout << "Clearly, your second car is more fuel efficient." << endl; 
}else if(mpg==mpg2){
cout << "Miraculously, both cars have the exact same fuel efficency." << endl;
}
cout << "Would you like to compare two more cars? (Y/N) : ";
cin >> repeat;
}while(repeat!="N");
cout << "Have a nice day." << endl;
return 0;
}

float fnMPG (float x,float y){
return x/y;
}


