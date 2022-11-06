//
//  FullNameGenerator.cpp
//  MockData
//
//  Created by user on 05/11/2022.
//

#include "FullNameGenerator.hpp"

FullNameGenerator:: FullNameGenerator()
{
    srand((unsigned int)(NULL));
}
FullName FullNameGenerator:: next(map<string,string> lName, map<string,string> mName, vector<string> fName)
{
    
    auto inGen = RNG:: instance();
    _first = fName[(inGen->next(0,fName.size()-1))];
    
    
    bool isValidName = 0;
    while(true)
    {
    // RNG middle Name
    map<string,string>:: iterator iMidName;
    int indexMidName = inGen->next(0,mName.size()-1);
        
      //  cout<<indexMidName<<endl;
    iMidName= mName.begin();
        while(true)
        {
            if(indexMidName == 0) break;
            ++iMidName; indexMidName --;
        }
    
    // RNG last Name
    map<string,string>:: iterator iLastName;
    int indexLastName = inGen->next(0,lName.size()-1);
    //    cout<<indexLastName<<endl;
        
    iLastName= lName.begin();
        while(true)
        {
            if(indexLastName == 0) break;
            ++iLastName; indexLastName --;
            
        }
        
        
    if (iMidName->second == iLastName->second || iMidName->second == "-1" || iLastName->second == "-1")
    {
        isValidName = 1;
        _middle = iMidName->first;
        _last = iLastName->first;
        if (iMidName->second == iLastName->second)
        {
            if (iMidName->second == "-1"){ _gender =  inGen->next(48,49);
                
            }
            else _gender = iMidName->second;
        }
        else
       {
           if (iMidName->second == "-1") _gender = iLastName->second;
           if(iLastName->second == "-1") _gender = iMidName->second;
           
       }
    }
        if (isValidName) break;
    }
    
    FullName temp(_first,_middle,_last,_gender);
    return temp;

}


void check(map<string,string>:: iterator &i, int& index)
{
    while(true)
    {
        ++i; index --;
        if(index == 0) break;
    }
}
