#ifndef POINT_HPP_LOUP
#define POINT_HPP_LOUP

#include <iostream>
#include <math.h>

class Polaire;
class Cartesien;

class Point{
    private:

    public:
        virtual void afficher(std::ostream& ss) const = 0;
        virtual void convertir(Cartesien &c) const = 0;
        virtual void convertir(Polaire &p) const = 0;

};

std::ostream& operator<<(std::ostream &o, const Point &p);

#endif