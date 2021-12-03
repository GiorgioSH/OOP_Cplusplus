#ifndef PERSON_H
#define PERSON_H
#include <ctime>
#include "Creature.h"
#include "Gender.h"
#define CREATURE_H
#include <iostream>

using namespace std;

//on fait hériter à la classe Person la classe Creature et la classe Gender
class Person : public Creature, public Gender
{
    public:

        string email;
        string adress;
        string gender;
        string datetest;
        Person();
        virtual ~Person();
        Person(string userfirstname, string userlastname);
        //Person(string userfirstname, string userlastname, Gender *userGender);
        Person(string userfirstname, string userlastname, string userGender);
        string getemail();
        string getgender();
    protected:

    private:
};

#endif // PERSON_H
