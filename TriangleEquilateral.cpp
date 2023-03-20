#include "TriangleEquilateral.hpp"

using namespace std;

//////////Constucteur////////
TriangleEquilateral::TriangleEquilateral(int l) : m_longueur(l)
{}

//////////Methode////////
int TriangleEquilateral::perimetre(void){
    return 3*m_longueur;
}
void TriangleEquilateral::afficherCaracteristiques(void){
    cout << "-------------" << endl;
    cout << "Classe Triangle " << endl;
    cout << "-------------" << endl;
    cout << "Longueur : " << m_longueur << endl;
    cout << "Perimetre : " << perimetre() << endl << endl;