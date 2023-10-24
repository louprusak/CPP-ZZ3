#ifndef VECTEUR_HPP_LOUP
#define VECTEUR_HPP_LOUP

#include <algorithm>
#include <iterator>

class Vecteur{
    private:
        int *tab;
        int taille;
        int nb;
    public:
        Vecteur();
        Vecteur(int t);
        Vecteur(const Vecteur &v);
        ~Vecteur();
        int* getTab()const;
        int getTaille() const;
        int getNb() const;
        Vecteur& operator=(const Vecteur &v);
        
    
};


#endif