/*#include "Guillot_Natthan_Compagnie.h"

Compagnie::Compagnie(string nom_Compagnie, int nbWagonCompagnie) : _nom_Compagnie(nom_Compagnie), _nbWagonCompagnie(nbWagonCompagnie)
{
    _nbWagonCompagnie = 10;
    _team = {};
}

void Compagnie::ajouterTrains(Train train)
{
    _team.push_back(train);
}

ostream &operator<<(ostream &os, const Compagnie &compagnie)
{
    os << "Nom de la compagnie: " << compagnie._nom_Compagnie << endl;
    os << "Possède: " << compagnie._nbWagonCompagnie << endl;
    os << "Liste des trains: " << endl;
    
    for(Train train : compagnie._team){
        os << train << endl;
    }
}
*/