//
//  FullName.hpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#ifndef FullName_hpp
#define FullName_hpp

#include <stdio.h>
#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include <vector>
#include"RNG.hpp"
using namespace std;


class FullName{
private: string _fullName;
    string _gender;
public:
    FullName(string firstName, string middleName, string lName, string gender);
    void output();
    string getGender();
    string getFullName();
};

map<string, string> readfileLastName();
map<string, string> readFileMiddleName();
vector<string> readFileFirstName();


#endif /* FullName_hpp */
