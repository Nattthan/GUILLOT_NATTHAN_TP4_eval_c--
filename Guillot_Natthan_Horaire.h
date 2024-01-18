#pragma once

#include <string>
#include <iostream>

using namespace std;

class Horaire{
    private:
        int _h;
        int _m;
    public:
        Horaire(int h, int m);

        bool verifierHeure(int h, int m) const;
        void setHeure(int h, int m);

        Horaire operator+(const Horaire& nouvelleHoraire) const;
        friend ostream& operator<<(ostream& os, const Horaire& horaire);
};