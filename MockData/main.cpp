//
//  main.cpp
//  MockData
//
//  Created by user on 02/11/2022.
//
#include "Library.h"


int main(int argc, const char * argv[]) {
//    IdStudent a;
//    for (int i=0;i<30; i++)
//    {
//        cout<<a.next()<<endl;
//    }
//    DobGenerator a;
//    for (int i=0; i<10; i++)
//    {
//        Dob temp = a.next();
//        cout<< temp.toString()<<endl;
//    }
//    auto inGen = RNG:: instance();
//    map<string,string>:: iterator id;
      map<string, string> lName = readfileLastName();


    vector<string> fName = readFileFirstName();
    map<string,string> mName = readFileMiddleName();
//    FullNameGenerator a;
//    for (int i=0; i<100;i++)
//    {
//        FullName temp = a.next(lName, mName, fName);
//        temp.output();
//    }
    
    Info temp;
    auto inGen = RNG::instance();
    IdStudent tempID;
    temp._id = tempID.next();
    DobGenerator tempDob;
    temp._dob = (tempDob.next()).toString();
    FullNameGenerator tempFullname;
    FullName tempName = tempFullname.next(lName,mName,fName);
    temp._fullname =tempName.getFullName();
    temp._gender = tempName.getGender();
    VnTelephoneGenerator tempPhone;
    temp._phone = tempPhone.next().getTelViettel();
    
    GPAGenerator tempGPA;
    temp._gpa = tempGPA.next().getGPA();
    
    AddressGenerator tempAddress;
    temp._address = tempAddress.next().toString();
    
  //  string tempEmail = convertFullNameToMail(temp._fullname);
    
    string tempM = convertFullNameToMail(temp._fullname);
    
    cout<<"Fullname: "<<temp._fullname<<endl;
    cout<<"Date of birth: "<<temp._dob<<endl;
    cout<<"Gender: "<<temp._gender<<endl;
    cout<<"ID: "<<temp._id<<endl;
    cout<<"Phone: "<<temp._phone<<endl;
    cout<<"GPA: "<<temp._gpa<<endl;
    cout<<"Address: "<<temp._address<<endl;
    cout<<"Emial: "<<tempM;
//    {
//        temp.next();
//    }
    
//    GPAGenerator temp;
//    for (int i=0;i <500;i++)
//        temp.next();
    
    
    
    return 0;
}
