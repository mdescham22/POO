#include "Class.hpp"

using namespace std;

//////////Constucteur////////

Figure::Figure(){}

Polygone::Polygone(){}
Rectangle::Rectangle(int l, int L) : m_longueur(l), m_largeur(L)
{}

Carre::Carre(int l) : m_longueur(l)
{}

TriangleEquilateral::TriangleEquilateral(int l) : m_longueur(l)
{}

Cercle::Cercle(int r):m_rayon(r)
{}

//////////Methode_Rectangle////////
int Rectangle::perimetre(void){
    return 2*(m_longueur+m_largeur);
}
void Rectangle::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Rectangle " << endl;
    cout << "-------------" << endl;
    cout << "Longueur : " << m_longueur << endl;
    cout << "Largeur : " << m_largeur<<endl;
    cout << "Perimetre : " << perimetre() << endl << endl;
}


//////////Methode_Carre////////
int Carre::perimetre(void){
    return 4*m_longueur;
}
void Carre::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Carre " << endl;
    cout << "-------------" << endl;
    cout << "Longueur : " << m_longueur << endl;
    cout << "Perimetre : " << perimetre() << endl << endl;
}

//////////Methode_Triangle_Equilateral////////
int TriangleEquilateral::perimetre(void){
    return 3*m_longueur;
}
void TriangleEquilateral::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Triangle " << endl;
    cout << "-------------" << endl;
    cout << "Longueur : " << m_longueur << endl;
    cout << "Perimetre : " << perimetre() << endl << endl;
    
}

//////////Methode_Cercle////////
int Cercle::perimetre(void){
    return 2*pi*m_rayon;
}
void Cercle::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Cercle " << endl;
    cout << "-------------" << endl;
    cout << "Rayon : " << m_rayon << endl;
    cout << "Perimetre :" << perimetre() << endl << endl;;
    
}