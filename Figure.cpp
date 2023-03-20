#include "Figure.hpp"

using namespace std;

//////////Constucteur////////
Figure::Figure()
{
    m_cpt++;
}

//////////Methode////////
void Figure::nbFigure(void){
    cout << "Le nombre de figure est de : " << m_cpt << endl;
}

int Figure::m_cpt=0;