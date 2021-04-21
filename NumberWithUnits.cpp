#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel
{    
    NumberWithUnits::NumberWithUnits(double x, string s)
    {
        x=0;
    }
    void ariel::NumberWithUnits::read_units(ifstream& ifs)
    {
        
    }

    ostream& operator << (ostream& os, NumberWithUnits& n)
    {
        
        return os;
    }
    NumberWithUnits& operator - (NumberWithUnits& n)
    {
        
        return n; 
    }
    NumberWithUnits& operator * (double x, NumberWithUnits& n)
    {
        return n;
    }
    NumberWithUnits& NumberWithUnits::operator + (NumberWithUnits& n1)
    {
        return n1;
    }
    NumberWithUnits& operator - (NumberWithUnits& n1, NumberWithUnits& n2)
    {
        return n1;
    }
    bool operator > (NumberWithUnits& n1, NumberWithUnits& n2)
    {
        return true;
    }
    bool operator <= (NumberWithUnits& n1, NumberWithUnits& n2)
    {
        return true;
    }
    bool NumberWithUnits::operator == (const NumberWithUnits& n1)
    {
        return true;
    }
    istringstream& operator >> (istringstream& is, NumberWithUnits& n)
    {
        return is;
    }
    NumberWithUnits& operator += (NumberWithUnits& n1, const NumberWithUnits& n2)
    {
        return n1;
    }
}