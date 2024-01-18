#include "Guillot_Natthan_Horaire.h"

Horaire::Horaire(int h, int m) : _h(h), _m(m)
{
    if(verifierHeure(h, m) == true){}
    else{
        _h = -1;
        _m = -1;
    }
}

bool Horaire::verifierHeure(int h, int m) const
{
    if (h >= 0 && h <= 23 && m >= 0 && m <= 59){ return true; }
    else { return false; }
}

void Horaire::setHeure(int h, int m)
{
    _h = h;
    _m = m;
}

Horaire Horaire::operator+(const Horaire &nouvelleHoraire) const
{
    Horaire nouvelleheure(_h, _m);
    
    nouvelleheure._h += nouvelleHoraire._h;
    nouvelleheure._m += nouvelleHoraire._m;

    if(nouvelleheure._h >= 23){
        nouvelleheure._h -= 23;
    }
    else if (nouvelleheure._m >= 59){
        nouvelleheure._m -= 59;
    }
    
    return nouvelleheure;
}

ostream &operator<<(ostream &os, const Horaire &horaire)
{
    os << "Il est: " << horaire._h << "h" << horaire._m << endl;

    return os;
}
