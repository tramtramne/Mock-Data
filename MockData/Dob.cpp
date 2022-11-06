//
//  Dob.cpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#include "Dob.hpp"



Dob:: Dob(int day, int month, int year)
{
    _day = day;
    _month = month;
    _year = year;
}

Dob:: Dob()
{
    time_t info = time(NULL);
    tm* now = localtime( &info);
    
    _year = now->tm_year + 1900;
    _month = now->tm_mon + 1;
    _day = now->tm_mday;
}

int Dob:: currentYear() { return _year;}

string Dob:: toString()
{
    stringstream builder;
    builder<<_day<<"/"<<_month<<"/" <<_year;
    string str = builder.str();
    return str;
}

bool Dob:: isLeapYear(int year)
{
    bool result = (year %400 == 0) || (year %4 ==0 && year %100 !=0);
    return result;
}
