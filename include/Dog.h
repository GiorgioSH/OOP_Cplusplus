#ifndef DOG_H
#define DOG_H
#include <Creature.h>
#include <iostream>

using namespace std;


class Dog : public Creature
{
    public:

        string species;
        Dog();
        virtual ~Dog();

        Dog(string userfirstname);
        Dog(string userfirstname, string userdogsspecie);
        string bark();
        string setspecie(string userdogsspecie);
        string getspecie();

    protected:

    private:
};

#endif // DOG_H
