#ifndef DEF_Cellule
#define DEF_Cellule

#include "Figure.hpp"

class List
{
    public:

    Cellule(Figure* fig);

    protected:
    Figure* m_donnee;
    Cellule* pm_suivant;
    
};

#endif