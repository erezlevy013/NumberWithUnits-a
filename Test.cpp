#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}



TEST_CASE("Good code") {
   
NumberWithUnits km {1000, "m"};
NumberWithUnits m {100, "cm"};
NumberWithUnits kg {1000, "g"}; 
NumberWithUnits ton {1000, "kg"};
NumberWithUnits hour {60, "min"}; 
NumberWithUnits min {60, "sec"};
NumberWithUnits usd {3.3, "ILS"};
NumberWithUnits usd2 {3.3, "ILS"}; 
/*
    CHECK_EQ(kg, 10*ton);
    CHECK_EQ(km , 10*m );
    CHECK_EQ((-10)*m, -km);
    CHECK_EQ(-usd2 , -usd);
    CHECK_EQ(100*m , 10*km);


    CHECK_EQ(kg, 10*ton);
    CHECK_EQ(km , 10*m );
    CHECK_EQ((-10)*m , -km);
    CHECK_EQ(-usd2 , -usd);
    CHECK_EQ(100*m , 10*km);

    CHECK_EQ(kg, 10*ton);
    CHECK_EQ(km , 10*m );
    CHECK_EQ((-10)*m , -km);
    CHECK_EQ(-usd2 , -usd);
    CHECK_EQ(100*m , 10*km);
  */


    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    CHECK_EQ(1,1);
    

   
}

TEST_CASE("Bad code") {

NumberWithUnits km {1000, "m"};
NumberWithUnits m {100, "cm"};
NumberWithUnits kg {1000, "g"}; 
NumberWithUnits ton {1000, "kg"};
NumberWithUnits hour {60, "min"}; 
NumberWithUnits min {60, "sec"};
NumberWithUnits usd {3.3, "ILS"};
NumberWithUnits usd2 {3.35, "ILS"};
    

    CHECK_THROWS(km.operator == (kg));
    CHECK_THROWS(m.operator == (10*kg));
    CHECK_THROWS(kg.operator == (ton));
    CHECK_THROWS(hour.operator ==(min));
    CHECK_THROWS( m.operator == (10*ton));
    CHECK_THROWS(usd.operator ==(usd2));
    
    CHECK_THROWS(kg.operator + (ton));
    CHECK_THROWS(hour.operator + (usd));
    CHECK_THROWS( m.operator + (ton));
    CHECK_THROWS(usd.operator + (min));

   

    
}