/* 
 * File:   main.cpp
 * Author: Oscar Mayorga 
 * Created on January 9, 2015, 10:10 PM
 * Porpuse: hmwr, Practice Programs Problem 2
 */

//System librery
#include <cstdlib>
#include <iostream>
using namespace std;

//User Library

//Global Constants 

//Prototype

//Execution Begins here!
int main( )
{
    int number_of_pods, peas_per_pod, total_peas;
    cout<< "Hello! "<<endl;
    cout<< "Press return after entering a number.";
    cout<< "Enter the number of pods;|n";
    cin>> number_of_pods;
    cout<< "Enter the number of peas in a pod:|n";
    cin>>peas_per_pod;
    total_peas=number_of_pods*peas_per_pod;
    cout<< "If you have ";
    cout<< number_of_pods;
    cout<< "Pods ";
    cout<< "and ";
    cout<< peas_per_pod;
    cout<< "peas in each pod, then ";
    cout<< "you have ";
    cout<< total_peas;
    cout<< " peas in all the pods.";
    cout<< " Good-bye!";
    return 0;
}
