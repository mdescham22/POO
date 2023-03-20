#include "Cercle.hpp"

using namespace std;

//////////Constucteur////////
Cercle::Cercle(int r):m_rayon(r)
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