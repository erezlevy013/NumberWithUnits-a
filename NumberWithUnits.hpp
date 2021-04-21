#ifndef NUMBERWITHUNIT_H
#define NUMBERWITHUNIT_H


#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel
{
    class NumberWithUnits
    {
        public:
        int x;

        
        NumberWithUnits(double x, string s);
        static void read_units(ifstream& ifs);

        friend ostream& operator << (ostream& os, NumberWithUnits& n); 
        friend NumberWithUnits& operator - (NumberWithUnits& n);
        friend NumberWithUnits& operator * (double x, NumberWithUnits& n);
        friend NumberWithUnits& operator - (NumberWithUnits& n1, NumberWithUnits& n2);
        NumberWithUnits& operator + (NumberWithUnits& n1);
        friend NumberWithUnits& operator - (NumberWithUnits& n1, NumberWithUnits& n2);
        friend bool operator > (NumberWithUnits& n1, NumberWithUnits& n2);
        friend bool operator > (NumberWithUnits& n1, NumberWithUnits& n2);
        friend bool operator <= (NumberWithUnits& n1, NumberWithUnits& n2);
        bool operator == (const NumberWithUnits& n1);
        friend istringstream& operator >> (istringstream& is, NumberWithUnits& n);
        friend NumberWithUnits& operator += (NumberWithUnits& n1, const NumberWithUnits& n2);

    };



}
#endif