#ifndef DEF_CLASS
#define DEF_CLASS

#include <iostream>

#define pi 3.1415

class Figure
{
    public:
    
    virtual int perimetre(void)=0;
    virtual void afficherCaracteristiques(void)=0;

    Figure();

    protected:

};

class Polygone : public Figure
{
    public:
    
    Polygone();

    protected:

    int m_nbCotes;
};

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


class Carre : public Polygone
{
    public:

    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    Carre(int l) ;

    protected:
    int m_longueur;
    
};

class TriangleEquilateral : public Polygone
{
    public:

    virtual int perimetre();
    virtual void afficherCaracteristiques();
    
    TriangleEquilateral(int l);

    protected:
    int m_longueur;
    
};

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