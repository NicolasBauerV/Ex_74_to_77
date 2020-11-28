//
//  main.cpp
//  Exercice Part 4
//
//  Created by Nicolas BAUER on 20/11/2020.
//

#include <iostream>
#include "chose.hpp"
#include "demo.hpp"
#include "point.hpp"
#include "set_int.hpp"

//Definition de la variable nb_points (static)
int point::nb_points = 0; //Init

int main(int argc, const char * argv[]) {
    //Exercice 74
    chose *obj = new chose;
    std::cout << "Bonjour" << std::endl;
    delete obj;
    
    std::cout << std::endl; //Saut de ligne
    
    //Exercice 75
    void fct (CDemo, CDemo *);
    std::cout << "début main\n";
    CDemo a;
    CDemo b = 2;
    CDemo c = a;
    CDemo * adr = new CDemo (3,3);
    fct (a, adr);
    CDemo d = CDemo(4,4);
    c = CDemo (5,5);
    /* Affichage
     début main
     constructeur I : 1 0
     constructeur I : 2 0
     constructeur II (recopie) : 1 0
     constructeur I : 3 3
     constructeur II (recopie) : 1 0
     entrée fct
     destruction : 3 3
     sortie fct
     destruction : 1 0
     constructeur I : 4 4
     constructeur I : 5 5
     destruction : 5 5
     fin main
     destruction : 4 4
     destruction : 5 5
     destruction : 2 0
     destruction : 1 0
    */
    
    std::cout << std::endl;
    
    //Exercice 76
    point *p = new point [6];
    delete [] p;
    
    std::cout << std::endl;
    
    //Exercice 77
    SetInt ent1;
    std::cout << "Donner 20 entiers" << std::endl;
    int i, n;
    for (i = 0; i < 20; i++) {
        std::cin >> n;
        ent1.addElement(n);
        std::cout << "il y a : " << ent1.cardinal () << " entiers différents" << std::endl;
    }
    
    return 0;
}

void fct (CDemo d, CDemo * add) {
    std::cout << "entrée fct\n" ;
    delete add;
    std::cout << "sortie fct\n";
}
