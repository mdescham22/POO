#ifndef DEF_CARRE
#define DEF_CARRE

#include "Polygone.hpp"

#define pi 3.1415

class Carre : public Polygone
{
    public:

    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    Carre(int l) ;

    protected:
    int m_longueur;
    
};

#endif