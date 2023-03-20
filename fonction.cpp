
#include "fonction.hpp"

using namespace std;

Figure* test(void)
{
    
    vector<Figure *> listeFigure;
    listeFigure.push_back(new Carre(5));
    listeFigure.push_back(new Cercle(5));
    listeFigure.push_back(new TriangleEquilateral(5));
    for(long unsigned int i = 0 ; i < listeFigure.size() ; i++)
    {
        listeFigure[i]->afficherCaracteristiques();
    }

    return listeFigure[0];
}
