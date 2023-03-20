#include <vector>
#include "Class.hpp"

using namespace std;

int main(void)
{
    Rectangle r(5,3);
    r.afficherCaracteristiques();
    Carre c(4);
    c.afficherCaracteristiques();
    TriangleEquilateral t(6);
    t.afficherCaracteristiques();
    Cercle ci(2);
    ci.afficherCaracteristiques();
//    test();
    return 1;



}

int test(void)
{
Figure* tab[5];
tab[0] = new Carre(17);

    vector<Figure*>tab;
    tab.push_back(new Carre(5));
    tab.push_back(new Cercle(5));
    tab.push_back(new TriangleEquilateral(5));
    
    for(int i = 0 ; i < tab.size() ; i++)
    {
        tab[i]->afficherCaracteristiques();
    }

    return 1;
}