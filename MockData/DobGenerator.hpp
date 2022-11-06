//
//  DobGenerator.hpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#ifndef DobGenerator_hpp
#define DobGenerator_hpp

#include <stdio.h>
#include<iostream>
#include"RNG.hpp"
#include "Dob.hpp"
using namespace std;

class DobGenerator
{
private: int _month, _day,_year;
public:
    DobGenerator();
    Dob next(int year);
    Dob next();
};


#endif /* DobGenerator_hpp */
