#ifndef VECTEUR_HPP_LOUP
#define VECTEUR_HPP_LOUP

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
    
};

#endif