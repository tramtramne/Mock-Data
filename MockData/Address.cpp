//
//  Address.cpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#include "Address.hpp"

Address:: Address(string number, string street, string ward, string disrict, string city)
{
    _address = "So "+ number + ", Duong " + street +", Phuong "+ ward + ", Quan "+disrict + ", Thanh pho "+city;
}

string Address:: toString()
{
    return _address;
}
