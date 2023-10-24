#include "vecteur.hpp"

Vecteur::Vecteur(int t):taille(t){
    tab = new int[taille];
}

Vecteur::Vecteur():Vecteur(10){}

int* Vecteur::getTab()const{
    return tab;
}

Vecteur::Vecteur(const Vecteur &v){
    int* newtab = v.getTab();
    std::memcpy(tab, newtab, sizeof(newtab));
}

Vecteur::~Vecteur(){
    delete[] tab;
}

Vecteur& Vecteur::operator=(const Vecteur &v){
    if(this == &v) return *this;

    if(sizeof(tab) != sizeof(v.getTab())){
        int* temp = new int[sizeof(v.getTab())];
        delete[] tab;
        tab = temp;
    }

    std::memcpy(tab, v.getTab(), sizeof(v.getTab()));
    return *this;
}

