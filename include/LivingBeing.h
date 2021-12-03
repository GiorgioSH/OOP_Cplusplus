#ifndef LIVINGBEING_H
#define LIVINGBEING_H

#include <iostream>

using namespace std;

class LivingBeing
{
    public:
        LivingBeing();
        virtual ~LivingBeing();


        bool breath();
        string displayneedsair();

    protected:

    private:
};

#endif // LIVINGBEING_H
