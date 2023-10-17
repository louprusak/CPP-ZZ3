#include "nuage.hpp"

void Nuage::ajouter(Point& p){
    Point *ptr = &p;
    points.push_back(ptr);
}

unsigned int Nuage::size(){
    return points.size();
}

std::vector<Point*> Nuage::getPoints() const{
    return points;
}

std::vector<Point*>::const_iterator Nuage::begin() {
    return points.begin();
}

std::vector<Point*>::const_iterator Nuage::end() {
    return points.end();
}

Cartesien barycentre(const Nuage & n){
    const std::vector<Point*> &points = n.getPoints();

    if(points.empty()){
        return Cartesien(0.0, 0.0);
    }

    double valX = 0.0;
    double valY = 0.0;

    for (const Point* p : points)
    {
        Cartesien c;

        p->convertir(c);

        valX += c.getX();
        valY += c.getY();
    }

    return Cartesien(valX/points.size(), valY/points.size()); 
}

Cartesien BarycentreCartesien::operator()(const Nuage &n) const {
    return barycentre(n);
}

Polaire BarycentrePolaire::operator()(const Nuage &n) const {
    return Polaire(barycentre(n));
}