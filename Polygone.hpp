#ifndef DEF_POLYGONE
#define DEF_POLYGONE

#include "Figure.hpp"

#define pi 3.1415

class Polygone : public Figure
{
    public:
    
    Polygone();

    protected:

    int m_nbCotes;
};

#endif