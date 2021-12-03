#include "Creature.h"
#include <string>

/*
Creature::Creature(Gender creatureGender)
{
    this->gender = creatureGender;
}
*/
Creature::Creature()
{
    //ctor
}

Creature::~Creature()
{
    //dtor
}

bool Creature::breath(){
    return true;
}

string Creature::displayneedsair(){
    return "I NEED AIR TO BREATH";
}


string Creature::getfirstname(){
    return this->firstName;
}

string Creature::getdate(int bday, int bmonth, int year){
    this->res = to_string(bday)+"/"+to_string(bmonth)+"/"+to_string(year);
    return res;
}
