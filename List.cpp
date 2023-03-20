#include "Carre.hpp"

using namespace std;

//////////Constucteur////////
Carre::Carre(int l) : m_longueur(l)
{}

//////////Methode////////
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