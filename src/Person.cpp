#include "Person.h"
#include <string>

Person::Person(string userfirstname, string userlastname)
{
    this->firstName = userfirstname;
    this->lastName = userlastname;
}
/*
Person::Person(string userfirstname, string userlastname, Gender *userGender)
{
    this->firstName = userfirstname;
    this->lastName = userlastname;
    Gender::thegender = userfirstname;
}
*/
Person::Person(string userfirstname, string userlastname, string userGender)
{
    this->firstName = userfirstname;
    this->lastName = userlastname;
    Gender::thegender = userGender;
}

string Person::getgender(){
    return Gender::thegender;
}

Person::Person()
{
    //default constructor
}

Person::~Person()
{
    //dtor
}

string Person::getemail(){
    return this->email;
}
