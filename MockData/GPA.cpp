//
//  GPA.cpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#include "GPA.hpp"

GPA :: GPA(string score){
    _score =score;
}

string GPA:: getGPA()
{
    return _score;
}
