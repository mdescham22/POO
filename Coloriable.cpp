
#include "Coloriable.hpp"

//////////Constucteur////////
Coloriable::Coloriable(string coul){
    m_couleur=coul;
}

//////////Methode////////
string Coloriable::getCouleur(){
    return m_couleur;
}

void Coloriable::setCouleur(string coul){
    m_couleur=coul;
}