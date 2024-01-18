#include "Guillot_Natthan_train.h"
#include <iostream>
#include <string>

using namespace std;

Train::Train(string nom, int nbWagons, int nbVoyageurs, Horaire horaireDepart, int dureeVoyage) : _nom(nom), _nbWagons(nbWagons), _horaireDepart(horaireDepart), _dureeVoyage(dureeVoyage)
{
    _nbVoyageurs = 0;
    capacite = 50*nbWagons;
}

void Train::ajouterPassagers(int nbPassager)
{
    _nbVoyageurs += nbPassager;
    if(_nbVoyageurs > capacite){
        int reste = _nbVoyageurs % capacite;
        _nbVoyageurs -= reste;
        cout << "il reste " << reste << "passagers qui n'ont pas pu embarquer" << endl;
    }
}

void Train::ajouterWagons(int nbWagon)
{
    _nbWagons += nbWagon;
    capacite += 50*nbWagon;
}

void Train::supprimerWagons(int nbWagon)
{
    _nbWagons -= nbWagon;
    capacite = 50*_nbWagons;
    if(_nbVoyageurs > capacite){
        int reste = _nbVoyageurs % capacite;
        _nbVoyageurs -= reste;
        cout << "il reste " << reste << " passagers qui n'ont pas pu embarquer a cause de la suppression de wagons" << endl;
    }
}

Horaire Train::calculHoraireArrivee()
{
    int h, m;
    h = _dureeVoyage / 60;
    m = _dureeVoyage % 60;
    Horaire tempsPlusPlus(h, m);
    Horaire horaireArrivee(0, 0);
    horaireArrivee = _horaireDepart + tempsPlusPlus;

    return horaireArrivee;
}

ostream &operator<<(ostream &os, Train &train)
{
    os << "nom du train: "          << train._nom << endl;
    os << "nombre de wagons: "      << train._nbWagons << endl;
    os << "nombre de voyageurs: "   << train._nbVoyageurs << endl;
    os << "heure de depart: "       << train._horaireDepart << endl;
    os << "heure d'arrivee: "       << train.calculHoraireArrivee() << endl;
    os << "duree du trajet: "       << train._dureeVoyage << endl;

    return os;
}