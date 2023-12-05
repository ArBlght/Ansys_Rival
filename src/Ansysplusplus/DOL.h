//class that will count deg of liberty to create right size matrix
#pragma once
#include <iostream>
class Dol
{
    private :
        static unsigned int dol_counter_glob;
    public :
        const unsigned int id;
        unsigned int get_dol_counter_glob() const {return dol_counter_glob;};
        Dol();
        ~Dol();
};