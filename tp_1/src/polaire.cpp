#include "polaire.hpp"

Polaire::Polaire(): angle(0), distance(0){}

Polaire::Polaire(double a, double d): angle(a), distance(d){}

Polaire::Polaire(Cartesien c):
    Polaire(
        std::atan2(c.getY(),c.getX())*180/M_PI,
        std::hypot(c.getX(),c.getY())
    )
{}

// Polaire::Polaire(Cartesien c)
// {
//     angle = std::atan2(c.getY(),c.getX())*180/M_PI;
//     distance = std::hypot(c.getX(),c.getY());
// }

double Polaire::getAngle() const{
    return angle;
}

double Polaire::getDistance() const{
    return distance;
}

void Polaire::setAngle(double a){
    angle = a;
}

void Polaire::setDistance(double d){
    distance = d;
}

void Polaire::afficher(std::ostream& ss) const{
    ss << "(a=" << angle << ";d=" << distance << ")";
}

void Polaire::convertir(Cartesien &c) const{
    c.setX(distance * std::cos(angle * M_PI / 180));
    c.setY(distance * std::sin(angle * M_PI / 180));
}

void Polaire::convertir(Polaire &p) const{
    p.setAngle(angle);
    p.setDistance(distance);
}