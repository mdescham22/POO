#ifndef DEF_TRIANGLE_EQ
#define DEF_TRIANGLE_EQ

#include "Polygone.hpp"

#define pi 3.1415

class TriangleEquilateral : public Polygone
{
    public:

    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    TriangleEquilateral(int l);

    protected:
    int m_longueur;
    
};

#endif