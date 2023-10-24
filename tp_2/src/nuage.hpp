#ifndef NUAGE_HPP_LOUP
#define NUAGE_HPP_LOUP
#include <vector>
#include "point.hpp"
#include "cartesien.hpp"

template<typename T>
class Nuage{

    private:
        std::vector<T> points;
    public:
        typedef typename std::vector<T>::const_iterator const_iterator;
        void ajouter(const T& p);
        unsigned int size();
        std::vector<T> getPoints() const;
        typename std::vector<T>::const_iterator begin();
        typename std::vector<T>::const_iterator end();

};



template<typename T>
T barycentre_v1(const Nuage<T> &n);

template<typename T>
T barycentre_v2(const Nuage<T> &n);

// template<typename T>
// class BarycentreCartesien{
//     public:
//         Cartesien operator()(const Nuage<T> &n) const;
// };

// template<typename T>
// class BarycentrePolaire{
//     public:
//         Polaire operator()(const Nuage<T> &n) const;
// };

#include "nuage.impl.hpp"

#endif