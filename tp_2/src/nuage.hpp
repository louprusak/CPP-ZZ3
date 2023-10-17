#ifndef NUAGE_HPP_LOUP
#define NUAGE_HPP_LOUP
#include <vector>
#include "point.hpp"
#include "cartesien.hpp"

class Nuage{

    private:
        std::vector<Point*> points;
    public:
        typedef typename std::vector<Point*>::const_iterator const_iterator;
        void ajouter(Point& p);
        unsigned int size();
        std::vector<Point*> getPoints() const;
        std::vector<Point*>::const_iterator begin();
        std::vector<Point*>::const_iterator end();

};

Cartesien barycentre(const Nuage &n);

class BarycentreCartesien{
    public:
        Cartesien operator()(const Nuage &n) const;
};

class BarycentrePolaire{
    public:
        Polaire operator()(const Nuage &n) const;
};


#endif