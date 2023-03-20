#ifndef DEF_FIGURE
#define DEF_FIGURE

#include <iostream>

class Figure
{
    public:
    
    virtual int perimetre(void)=0;
    virtual void afficherCaracteristiques(void)=0;
    void nbFigure(void);

    Figure();

    protected:
    static int m_cpt;

};

#endif