/*#pragma once
#include <string>
#include <vector>
#include "Guillot_Natthan_train.h"

using namespace std;

class Compagnie{
    private:
        string _nom_Compagnie;
        int _nbWagonCompagnie;
        vector <Train> _team;

    public:
        Compagnie(string nom_Compagnie ,int nbWagonCompagnie);

        void ajouterTrains(Train train);

        friend ostream& operator<<(ostream& os, const Compagnie& compagnie);

};
*/