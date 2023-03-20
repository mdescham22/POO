#include "Rectangle.hpp"

using namespace std;

//////////Constucteur////////
Rectangle::Rectangle(int l, int L) : m_longueur(l), m_largeur(L)
{}

//////////Methode////////
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