#include "nuage.hpp"

template<typename T>
void Nuage<T>::ajouter(const T& p){
    // T *ptr = &p;
    points.push_back(p);
}

template<typename T>
unsigned int Nuage<T>::size(){
    return points.size();
}

template<typename T>
std::vector<T> Nuage<T>::getPoints() const{
    return points;
}

template<typename T>
typename std::vector<T>::const_iterator Nuage<T>::begin() {
    return points.begin();
}

template<typename T>
typename std::vector<T>::const_iterator Nuage<T>::end() {
    return points.end();
}

template<typename T>
T barycentre_v1(const Nuage<T> & n){
    const std::vector<T> &points = n.getPoints();

    if(points.empty()){
        return T(0.0, 0.0);
    }

    double valX = 0.0;
    double valY = 0.0;

    for (const T p : points)
    {
        Cartesien c;

        p.convertir(c);

        valX += c.getX();
        valY += c.getY();
    }

    return T(Cartesien(valX/points.size(), valY/points.size())); 
}


Polaire barycentre_v1(const Nuage<Polaire> & n){
    const std::vector<Polaire> &points = n.getPoints();

    if(points.empty()){
        return Polaire(0.0, 0.0);
    }

    double valAngle = 0.0;
    double valDistance = 0.0;

    for (const Polaire p : points)
    {
        // Polaire c;

        // p.convertir(c);

        valAngle += p.getAngle();
        valDistance += p.getDistance();
    }

    return Polaire(valAngle/points.size(), valDistance/points.size()); 
}

// template<typename T>
// T barycentre_v2(const Nuage<T> & n){

//     Nuage<T>::const_iterator
//     const std::vector<T> &points = n.getPoints();

//     if(points.empty()){
//         return T(0.0, 0.0);
//     }


// }

// Cartesien BarycentreCartesien::operator()(const Nuage &n) const {
//     return barycentre(n);
// }

// Polaire BarycentrePolaire::operator()(const Nuage &n) const {
//     return Polaire(barycentre(n));
// }
