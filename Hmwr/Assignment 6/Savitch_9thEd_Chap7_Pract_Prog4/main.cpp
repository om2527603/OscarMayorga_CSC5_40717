/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on Feb 5th, 2015, 10:09 AM
 *      Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    using namespace std; 
    string names[]= {"Michael Myers",
                     "Ash Williams",
                     "Jack Torrance",
                     "Freddy Krueger"};
    string phonesNumbers[]= {"333-8000", "333-2323",
                              "333-6150", "339-7970"};
    string targetPhone, targetName, lookupName;
    char c ;
    do
    {cout<<"Enter a name to find the "
            <<"corresponding phone number."
            <<endl;
    getline(cin, targetName);
 
    targetPhone=lookupName(targetName, names, phonesNumbers,4);
    
    if (targetPhone.length()>0) 
        cout<<"The number is: "
                <<targetPhone<<endl;
    else 
        cout<<"Name not found."
                <<endl;
        cout<<"Look up another name? (y/n)"
                <<endl;
        cin>>c;
        cin.ignore();  
    }while (c=='y');

    return 0;
}

