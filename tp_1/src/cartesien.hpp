#ifndef CARTESIEN_HPP_LOUP
#define CARTESIEN_HPP_LOUP
#include "point.hpp"
#include "polaire.hpp"


class Cartesien:public Point{
    private:
        double x;
        double y;
    public:
        Cartesien();
        Cartesien(double x, double y);
        Cartesien(Polaire p);
        double getX() const;
        double getY() const;
        void setX(double x2);
        void setY(double y2);
        void afficher(std::ostream& ss) const;
        void convertir(Cartesien& c) const;
        void convertir(Polaire& p) const;
};

// std::ostream& operator<<(std::ostream &o, const Cartesien &c){
//     return o << "(x=" << c.getX() << ";y=" << c.getY() << ")";
//     //c.afficher(o);
//     // return o;
// }


#endif