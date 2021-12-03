#include "Dog.h"
#include <string>

Dog::Dog()
{
    //ctor
}

Dog::Dog(string userfirstname)
{
    this->firstName = userfirstname;
}

Dog::Dog(string userfirstname, string userdogsspecie)
{
    this->firstName = userfirstname;
    this->species = userdogsspecie;
}

Dog::~Dog()
{
    //dtor
}

string Dog::bark(){
    return "waf waf";
}

string Dog::setspecie(string userdogsspecie){
    this->species = userdogsspecie;


    return this->species;

}

string Dog::getspecie(){
    return this->species;
}
