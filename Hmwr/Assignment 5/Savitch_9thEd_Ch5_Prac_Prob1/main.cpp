/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 25, 2015, 2:33 PM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;


void average(float a,float b,float c,float d){
    cout<<"First score:"<<endl;
    cin>>a;
    cout<<"Second score: "<<endl;
    cin>>b;
    cout<<"Third score: "<<endl;
    cin>>c;
    cout<<"Fourth score: "<<endl;
    cin>>d;
    float ave = (a+b+c+d)/4;
    cout<<"The average is "<<ave<<endl;
    float temp= pow(a-ave,2)+pow(b-ave,2)+pow(c-ave,2)+pow(d-ave,2);
    float dev= temp/4;
    cout<<"The standard deviation is:"<<dev<<endl; 
}

int main(int argc, const char * argv[]) {
    char choose;
    int a,b,c,d;
    do{
        average( a, b, c, d);
        cout<<"again? [Y/N]"<<endl;
        cin>>choose;
    
    }while(choose=='y'||choose=='Y');
    return 0;
}
