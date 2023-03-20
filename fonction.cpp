
#include "fonction.hpp"

using namespace std;

int test(void)
{
    
    vector<Figure *> listeFigure;
    listeFigure.push_back(new Carre(5));
    listeFigure.push_back(new Cercle(5));
    listeFigure.push_back(new TriangleEquilateral(5));
    for(long unsigned int i = 0 ; i < listeFigure.size() ; i++)
    {
        listeFigure[i]->afficherCaracteristiques();
    }

    return 1;
}
