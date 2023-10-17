#include <cstdlib>
#include "point.hpp"
#include "polaire.hpp"
#include "cartesien.hpp"
#include <vector>


int main() {

    const double a = 12.0;
    const double d = 24.0;

    Polaire p(a,d);
    Polaire pp(a*2,d*2);

    const double x = 12.0;
    const double y = 24.0;

    Cartesien c(x,y);
    Cartesien cc(x*2,y*2);

    //std::vector<Point> v;
    std::vector<Point *> vv;

    // v.push_back(p);
    // v.push_back(c);
    // v.push_back(pp);
    // v.push_back(cc);

    vv.push_back(&p);
    vv.push_back(&c);
    vv.push_back(&pp);
    vv.push_back(&cc);

    // for (int i=0; i<4 ; i++)
    // {
    //     std::cout << v[i] << std::endl;
    // }

    for (int j=0; j<4 ; j++)
    {
        std::cout << *vv[j] << std::endl;
    }
    

    return EXIT_SUCCESS;
}
