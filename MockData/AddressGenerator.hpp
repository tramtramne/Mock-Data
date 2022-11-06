//
//  AddressGenerator.hpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#ifndef AddressGenerator_hpp
#define AddressGenerator_hpp

#include <stdio.h>
#include"Address.hpp"

class AddressGenerator
{
private:  string _ward,_street,_district,_number,_city;
public:
    AddressGenerator();
    Address next();
};

#endif /* AddressGenerator_hpp */
