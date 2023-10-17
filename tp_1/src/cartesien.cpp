#include "cartesien.hpp"

Cartesien::Cartesien():x(0),y(0){}

Cartesien::Cartesien(double x, double y): x(x), y(y) {}

Cartesien::Cartesien(Polaire p):
    Cartesien(
        p.getDistance() * std::cos(p.getAngle() * M_PI / 180),
        p.getDistance() * std::sin(p.getAngle() * M_PI / 180)
    )
{}

// Cartesien::Cartesien(Polaire p)
// {
//     x = p.getDistance() * std::cos(p.getAngle() * M_PI / 180);
//     y = p.getDistance() * std::sin(p.getAngle() * M_PI / 180);
// }

double Cartesien::getX() const {
    return x;
}

double Cartesien::getY() const {
    return y;
}

void Cartesien::setX(double x2){
    x = x2;
}

void Cartesien::setY(double y2){
    y = y2;
}

void Cartesien::afficher(std::ostream& ss) const {
    ss << "(x=" << x << ";y=" << y << ")";
}

void Cartesien::convertir(Cartesien &c) const{
    c.setX(x);
    c.setY(y);
}

void Cartesien::convertir(Polaire &p) const{
    p.setAngle(std::atan2(y,x)*180/M_PI);
    p.setDistance(std::hypot(x,y));
}