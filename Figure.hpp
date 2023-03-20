#ifndef DEF_FIGURE
#define DEF_FIGURE

#include <iostream>

class Figure
{
    public:
    
    virtual int perimetre(void)=0;
    virtual void afficherCaracteristiques(void)=0;

    Figure();

    protected:

};

#endif