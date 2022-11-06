//
//  GPAGenerator.cpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#include "GPAGenerator.hpp"


GPAGenerator::GPAGenerator()
{
    srand((unsigned int)time(NULL));
}

GPA GPAGenerator:: next()
{
    auto inGen = RNG::instance();
    int tempInt = inGen->next(100,999);
    double tempDouble = tempInt/100.0;
    string tempStr = to_string(tempDouble);
    while (tempStr.length() < 4) tempStr += "0";
    while (tempStr.length() > 4) tempStr.pop_back();
    GPA temp(tempStr);
    //temp.output();
    return temp;
    
}
