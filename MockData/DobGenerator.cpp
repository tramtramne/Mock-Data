//
//  DobGenerator.cpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#include "DobGenerator.hpp"

DobGenerator::DobGenerator()
{
    srand((unsigned int)(NULL));
}

Dob DobGenerator:: next(int year)
{
    auto inGe = RNG:: instance();
    _month = inGe->next(1,12);
    
    int dayInMonths[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    int dayInMonth = dayInMonths[_month];
    if (Dob::isLeapYear(year) && _month == 2) dayInMonth = 29;
    
    _day = inGe->next(1,dayInMonth);
    
    Dob result(_day,_month,_year);
    
    return result;
}

Dob DobGenerator:: next()
{
    
    auto inGe = RNG:: instance();
    int cur = Dob::Current().currentYear();
    _year = inGe->next(cur-118,cur);
    auto temp = next(_year);
    return temp;
}

