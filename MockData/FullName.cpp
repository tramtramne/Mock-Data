//
//  FullName.cpp
//  MockData
//
//  Created by user on 02/11/2022.
//

#include "FullName.hpp"



void FullName:: output()
{
    cout<<"Fullname: "<<_fullName<<endl;
    cout<<"Gender: "<<_gender<<endl;
}
FullName::FullName(string firstName, string middleName, string lastName, string gender)
{
    _fullName = firstName + " " + middleName + " " + lastName;
    _gender = gender;
    
}
string FullName:: getGender()
{
    return _gender;
}
string FullName:: getFullName() { return _fullName;}



int countSpace(string str)
{
    int count=0;
    for (int i=0;i <str.size();i++)
        if (str[i] == ' ') count++;
    return  count;
}
map<string, string> readfileLastName()
{
    ifstream f("/Users/user/Practice/OOP/MockData/MockData/LastName.txt");
    if (!f){
        cout<<"Can't open file"<<endl;
        exit(0);
    }
    
    auto inGen = RNG::instance();
    map<string, string> temp;
    //mymap.insert ( std::pair<char,int>('a',100) );
    string str;
    while (!(f.eof()))
    {
        string name,gender;
        getline(f, str,'\n');
        if (countSpace(str) == 9)
        //if (str.size() > 13 )
        {
            
            name = str.substr(0,str.find(' '));
            //string gender ;
            gender = str.substr(name.size()+4,str.find(name.size()+4,' '));
            if(gender == "Female") gender = "1";
            else gender = "0";
        }
        else{
            //string name;
            name = str.substr(0,str.find(' '));
            gender = "-1";
        }
      //  cout<<name<<" "<<gender<<endl;
        temp.insert(pair<string, string> (name,gender));
    }
    f.close();
    return temp;
}


map<string, string> readFileMiddleName()
{
    map<string, string> temp;
    ifstream f("/Users/user/Practice/OOP/MockData/MockData/MiddleName.txt");
    if (!f) {
        cout<<"Can't open file"<<endl;
        exit(0);
    }
    string str, mName, gender;
    while (!f.eof())
    {
        
        getline(f,str,'\n');
        if (str.find(' ') != string::npos)
        {
            mName = str.substr(0,str.find(' '));
            gender = str.substr(mName.size()+1,str.size()-1);
        }
        else {
            mName = str;
            gender = "-1";
        }
        temp.insert(pair<string,string> (mName,gender));
       // cout<<mName<<" "<<gender<<endl;
    }
    
    f.close();
    return temp;
}

vector<string> readFileFirstName()
{
    vector<string> temp;
    ifstream f("/Users/user/Practice/OOP/MockData/MockData/FirstName.txt");
    if (!f)
    {
        cout<<"Can't open file"<<endl;
        exit(0);
    }
    while (!f.eof()) {
        string str;
        getline(f,str,'\n');
        temp.push_back(str);
        //cout<<str <<endl;
    }
    
    f.close();
    return temp;
}
