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
        //using value_type = T;
        typedef typename std::vector<T>::const_iterator const_iterator;
        //using const_iterator = typename std::vector<T>::const_iterator;
        void ajouter(const T& p);
        unsigned int size();
        std::vector<T> getPoints() const;
        Nuage::const_iterator begin() const;
        Nuage::const_iterator end()const;

};



template<typename T>
T barycentre_v1(const Nuage<T> &n);

template<typename T>
Cartesien barycentre_v2(const T &t);

// template<typename T>
// typename T::value_type barycentre_v2(const T &n);

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