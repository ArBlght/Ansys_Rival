#class that will count deg of liberty to create right size matrix

#include <iostream>
class Dol
{
    private :
        static unsigned int dol_counter_glob = 0;
    public :
        const unsigned int id;
        unsigned int get_dol_counter_glob();
        Dol();
        ~Dol();
}