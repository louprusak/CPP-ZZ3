#include "vecteur.hpp"

Vecteur::Vecteur(int t):taille(t){
    tab = new int[taille];
}

Vecteur::Vecteur():Vecteur(10){}

int* Vecteur::getTab()const{
    return tab;
}

Vecteur::Vecteur(const Vecteur &v){
    const int* tab = v.getTab();


}