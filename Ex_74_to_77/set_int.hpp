//
//  set_int.hpp
//  Exercice Part 4
//
//  Created by Nicolas BAUER on 20/11/2020.
//

#ifndef set_int_hpp
#define set_int_hpp

#include <iostream>

class SetInt {
    int *adValTab; //adresse de la valeur du tableau
    int NBMAX; //Nb max d'éléments
    int nElement; //Nombre d'éléments
    
public:
    SetInt(int = 20); //Constructeur
    ~SetInt();//Destructeur
    void addElement(int); //add element
    int appartient (int); //Savoir si l'entier donné lui appartient
    int cardinal (); //connaitre son nombre d'elements
};

#endif /* set_int_hpp */
