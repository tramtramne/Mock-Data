//
//  Dob.hpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#ifndef Dob_hpp
#define Dob_hpp

#include <stdio.h>
#include<iostream>
#include<ctime>
#include<sstream>
using namespace std;

class Dob
{
private: int _day, _month, _year;
public:
    Dob();
    static Dob Current() {return Dob();}
    Dob(int day, int month, int year);
    int currentYear();
    
    static bool isLeapYear(int year);
    string toString();
};

#endif /* Dob_hpp */
