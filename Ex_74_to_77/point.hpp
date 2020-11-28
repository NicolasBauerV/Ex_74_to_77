//
//  point.hpp
//  Exercice Part 4
//
//  Created by Nicolas BAUER on 20/11/2020.
//

#ifndef point_hpp
#define point_hpp

#include <iostream>

class point {
    int numPoint;
    static int nb_points;
public:
    point() {
        numPoint = nb_points++; //Ajout du nb de points
        std::cout << "Creation du premier point : " << numPoint << std::endl;
    }
    ~point() {
        std::cout << "Destruction du point numéro : " << numPoint << std::endl;
    }
};

#endif /* point_hpp */
