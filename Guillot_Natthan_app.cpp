#include <iostream>
#include <string>
#include "Guillot_Natthan_Horaire.h"
#include "Guillot_Natthan_train.h"

using namespace std;

int main(){
    //Début question 1
    Horaire temps1(2, 69);
    cout << temps1 << endl;
    //Fin question 1

    //Début question 2
    Horaire temps2(5, 23);
    cout << temps2 << endl;
    //Fin question 2

    //Début question 3
    temps2.setHeure(7, 56);
    cout << temps2 << endl;
    //Fin question 3

    //Début question 4
    Horaire tempsPlus(1,23);
    Horaire temps3 = temps2 + tempsPlus;
    //Fin question 4

    //Début question 5
    cout << temps3 << endl;
    //Fin question 5

    //Début question 6
    Horaire tempsPlus2(14,41);
    temps3 = temps3 + tempsPlus2;
    //Fin question 6

    //Début question 7
    cout << temps3 << endl;
    //Fin question 7

    //Début Exercice Train

    //Début question 1
    Horaire temps4(7,6);
    Train t1("TGV 6700 Dijon Paris", 10, 0, temps4, 96);
    cout << t1;
    //Fin question 1

    //Début question 2
    t1.ajouterPassagers(460);
    cout << t1;
    //Fin question 2

    //Début question 3
    t1.supprimerWagons(1);
    cout << t1;
    //Fin question 3

    //Début question 4
    t1.ajouterPassagers(50);
    cout << t1;
    //Fin question 4

    //Début question 5
    t1.ajouterWagons(1);
    cout << t1;
    //Fin question 5

    //Début question 6
    t1.ajouterPassagers(50);
    cout << t1;
    //Fin question 6

    //Debut exercice compagnie;
/*
    //Debut question 1
    Compagnie sncf("SNCF", 10);
    cout << sncf;
    //Fin question 1

    //Debut question 2
    Train t2("TGV 7500 Dijon Bordeaux", 10, 50, temps4, 96);
    Train t3("TGV 1918 Montpellier Paris", 10, 20, temps4, 96);
    Train t4("TGV 1900 Beaune Paris", 10, 1, temps4, 96);
    Train t5("TGV 1000 Dijon Strasbourg", 10, 200, temps4, 96);
    //Fin question 2

    //Debut question 3
    sncf.ajouterTrains(t2);
    sncf.ajouterTrains(t3);
    sncf.ajouterTrains(t4);
    sncf.ajouterTrains(t5);
    //Fin question 3

    //Debut question 5
    cout << sncf;
    //Fin question 5
*/
    return 0;
}