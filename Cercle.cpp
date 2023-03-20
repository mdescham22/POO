#include "Cercle.hpp"

using namespace std;

//////////Constucteur////////
Cercle::Cercle(int r):Coloriable(0),m_rayon(r)
{}

Cercle::Cercle(string coul, int r):Coloriable(coul),m_rayon(r)
{}

//////////Methode////////
int Cercle::perimetre(void){
    return 2*pi*m_rayon;
}
void Cercle::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Cercle " << endl;
    cout << "-------------" << endl;
    cout << "Rayon : " << m_rayon << endl;
    cout << "Perimetre :" << perimetre() << endl << endl;
    
}