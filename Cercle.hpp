#ifndef DEF_CERCLE
#define DEF_CERCLE

#include "Figure.hpp"
#include "Coloriable.hpp"

#define pi 3.1415

class Cercle : public Figure, public Coloriable
{
    public:
    
    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    Cercle(int r);
    Cercle(string coul, int r);

    protected:

    int m_rayon;
};

#endif