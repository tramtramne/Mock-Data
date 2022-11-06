//
//  Email.hpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#ifndef Email_hpp
#define Email_hpp

#include <stdio.h>
#include <iostream>
#include <regex>
#include <string>
#include <codecvt>
#include <locale>
using namespace std;
wstring RemoveVietnameseTone(const std::wstring& text);
string convertFullNameToMail(string name);
#endif /* Email_hpp */
