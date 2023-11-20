#ifndef CARTE_LOUP_HPP
#define CARTE_LOUP_HPP

#include <stdio.h>

class Carte{
    friend class UsineCarte;
    private:
        int val;
        Carte(int valeur) : val(valeur) {}
    public:
        
        Carte(const Carte &c) = delete;
        int getValeur(){return val;}
        Carte& operator=(const Carte &c) = delete;

};

#endif