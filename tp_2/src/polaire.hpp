#ifndef POLAIRE_HPP_LOUP
#define POLAIRE_HPP_LOUP
#include "point.hpp"
#include "cartesien.hpp"


class Polaire:public Point{
    private:
        double angle;
        double distance;
    public:
        Polaire();
        Polaire(double a, double d);
        Polaire(Cartesien c);
        double getAngle() const;
        double getDistance() const;
        void setAngle(double a);
        void setDistance(double d);
        void afficher(std::ostream& ss) const;
        void convertir(Cartesien& c) const;
        void convertir(Polaire& p) const;
};

// std::ostream& operator<<(std::ostream &o, const Polaire &p){
//     return o << "(a=" << p.getAngle() << ";d=" << p.getDistance() << ")";
//     // p.afficher(o);
//     //return o;
// }

#endif