//
//  FullNameGenerator.hpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#ifndef FullNameGenerator_hpp
#define FullNameGenerator_hpp

#include <stdio.h>
#include "FullName.hpp"


class FullNameGenerator{
private:
    string _first, _last,_middle,_gender;
public:
    FullNameGenerator();
    FullName next(map<string,string> lName, map<string,string> mName, vector<string> fName);
};
void check(map<string,string>:: iterator &i, int& index);
#endif /* FullNameGenerator_hpp */
