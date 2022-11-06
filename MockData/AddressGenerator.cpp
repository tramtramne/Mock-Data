//
//  AddressGenerator.cpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#include "AddressGenerator.hpp"

AddressGenerator:: AddressGenerator()
{
    srand((unsigned int)time(NULL));
}

Address AddressGenerator:: next()
{
    auto inGen = RNG::instance();
    int num = inGen->next(100,300);
    _number = to_string(num);
    _city = "Ho Chi Minh";
    
    string ward[] = {"1","2","3","4","5"};
    _ward = ward[inGen->next(0,4)];
    
    string street[] = {"Xo Viet Nghe Tinh", "Cach mang Thang Tam","Nguyen Thi Minh Khai","Vo Thi Sau","Mai Chi Tho" };
    _street = street[inGen->next(0,4)];
    
    
    string dictrict[] = {"1","2","3","4","5" };
    _district = dictrict[inGen->next(0,4)];
    Address temp (_number,_street,_ward,_district,_city);
    return temp;
}
