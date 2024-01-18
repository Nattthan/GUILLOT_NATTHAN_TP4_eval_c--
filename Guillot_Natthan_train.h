#pragma once

#include <iostream>
#include <string>
#include "Guillot_Natthan_Horaire.h"
#include "Guillot_Natthan_Compagnie.h"

using namespace std;

class Train{
    private:
        string _nom;
        Horaire _horaireDepart;
        int _nbWagons;
        int _nbVoyageurs;
        int _dureeVoyage;
        int capacite;

    public:
        Train(string nom, int nbWagons, int nbVoyageurs, Horaire horaireDepart, int dureeVoyage);

        void ajouterPassagers(int nbPassager);
        void ajouterWagons(int nbWagon);
        void supprimerWagons(int nbWagon);
        Horaire calculHoraireArrivee();

        friend ostream& operator<<(ostream& os, Train& train);
};
