#include "LivingBeing.h"
#include <string>



LivingBeing::LivingBeing()
{
    //default constructor
}

LivingBeing::~LivingBeing()
{
    //dtor
}

bool LivingBeing::breath(){
    return true;
}

string LivingBeing::displayneedsair(){
    return "I NEED AIR TO BREATH";
}
