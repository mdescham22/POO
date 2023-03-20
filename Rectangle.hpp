#ifndef DEF_RECTANGLE
#define DEF_RECTANGLE

#include "Polygone.hpp"

#define pi 3.1415

class Rectangle : public Polygone
{
    public:

    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    Rectangle(int l, int L);

    protected:
    int m_longueur;
    int m_largeur;

};

#endif