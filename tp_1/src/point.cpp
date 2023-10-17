#include "point.hpp"

std::ostream& operator<<(std::ostream &o, const Point &p){
    p.afficher(o);
    return o;
}