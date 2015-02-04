/* 
 * File:   main.cpp
 * Author: Oscar Mayorga
 * Created on February 4, 2015, 10:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void make_neat(ifstream& messy_file, ofstream& neat_file, 
        int number_after_decimalpoint, int field_width);

int main(int argc, char** argv) {
    ifstream fin; 
    ofstream fout;
    
    fin.open("rawdata.dat");
    if (fin.fail())
    {
        cout<"input file opening failed.\n";
        exit(1);
    }
    fout.open("neat.dat");
    if (fout.fail()) 
    {
        cout<<"Output file opening failed.\n";
        exit(1);
    }
    make_neat(fin, fout, 5, 12);
    fin.close();
    fout.close();
    
    cout<<"End of program.\n;";
    return 0;
}
void make_neat(ifstream& messy_file, ofstream& neat_file, 
        int number_after_decimalpoint, int field_width)
{
    neat_file.setf(ios::fixed);
    neat_file.setf(ios::showpoint);
    neat_file.setf(ios::showpos);
    neat_file.precision(number_after_decimalpoint);
    cout.setf(ios::fixed);
    cout.setf(ios::fixed);
    cout.setf(ios::fixed);

}
