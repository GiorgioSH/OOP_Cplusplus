#ifndef CREATURE_H
#define CREATURE_H
#include <iostream>
#include <Gender.h>

using namespace std;

class Creature
{
    public:
        float Height;
        float Weight;
        string firstName;
        string lastName;
        timer_t date;
        int birthday;
        int birthmonth;
        int birthyear;
        Gender gender;
        string res;
        string usergender;

        Creature();
        virtual ~Creature();

        //Creature(Gender creatureGender);

        string getfirstname();
        string getdate(int bday, int bmonth, int year);
        bool breath();
        string displayneedsair();

    protected:

    private:
};

#endif // CREATURE_H
