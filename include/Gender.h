#ifndef GENDER_H
#define GENDER_H

#include <iostream>

using namespace std;

class Gender
{
    public:
    /*
    string male;
    string female;
    string asexual;
    string hermaphrodite;
    */
    string thegender;

        Gender();
        virtual ~Gender();

        Gender(string usergender);

    protected:

    private:
};

#endif // GENDER_H
