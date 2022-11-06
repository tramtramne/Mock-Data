//
//  GPA.hpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#ifndef GPA_hpp
#define GPA_hpp

#include <stdio.h>
#include <iostream>
#include"RNG.hpp"
using namespace std;

class GPA
{
private: string _score;
public:
    GPA(string);
    string getGPA();
};
#endif /* GPA_hpp */
