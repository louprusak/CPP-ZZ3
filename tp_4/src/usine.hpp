#ifndef USINE_LOUP_HPP
#define USINE_LOUP_HPP

#include <stdio.h>
#include <carte.hpp>
#include <memory>

class UsineCarte{
    private:
        int nbCartes;
    public:
        UsineCarte() : nbCartes(0) {}
        UsineCarte(const UsineCarte &u) = delete;
        UsineCarte& operator=(const UsineCarte &u) = delete;
        std::unique_ptr<Carte> getCarte(){
            if(nbCartes < 52){
                std::unique_ptr<Carte> p(new Carte(nbCartes));
                ++nbCartes;
                return p;
            }
            else{
                return nullptr;
            }
        }
};

#endif