//
//  Address.hpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#ifndef Address_hpp
#define Address_hpp

#include <stdio.h>
#include<iostream>
#include"RNG.hpp"
using namespace std;

class Address
{
private: string _address;
public:
    Address(string,string,string,string,string);
    string toString();
};


#endif /* Address_hpp */
