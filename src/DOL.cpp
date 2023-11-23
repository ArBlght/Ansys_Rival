#include <iostream>
#include <Ansysplusplus/DOL.h>

unsigned int Dol::get_dol_counter_glob(){return dol_counter_glob;}

Dol::Dol():id{Dol::dol_counter_glob++}

Dol::~Dol(){
    --dol_counter_glob;
}