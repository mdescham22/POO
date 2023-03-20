#ifndef DEF_CERCLE
#define DEF_CERCLE

#include "Figure.hpp"

#define pi 3.1415

class Cercle : public Figure
{
    public:
    
    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    Cercle(int r);

    protected:

    int m_rayon;
};

#endif