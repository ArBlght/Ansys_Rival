#include <iostream>
#include "Ansysplusplus/DOL.h"

unsigned int Dol::dol_counter_glob = 0;

Dol::Dol():id{++Dol::dol_counter_glob}{};

Dol::~Dol()
{
    --dol_counter_glob;
}