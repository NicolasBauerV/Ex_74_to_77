//
//  set_int.cpp
//  Exercice Part 4
//
//  Created by Nicolas BAUER on 20/11/2020.
//

#include "set_int.hpp"
/*
SetInt::SetInt(int size) {
    adValTab = new int [NBMAX = size];
    nElement = 0;
}

SetInt::~SetInt() {
    delete adValTab;
}

void SetInt::addElement(int nb) {
    if (!appartient(nb) && (nElement < NBMAX)) {
        adValTab[nElement++] = nb;
    }
}

int SetInt::appartient(int nb) {
    int i = 0;
    
    while( (i < nElement) && (adValTab[i] != nb)) {
        i++;
    }
    return (i < nElement);
}

int SetInt::cardinal() {
    return nElement;
}

SetInt & SetInt::operator=(SetInt & ent) {
    if (this != &ent) {
        delete adValTab;
        adValTab = new int[NBMAX = ent.NBMAX];
        nElement = ent.nElement;
        for (int i = 0; i < nElement; i++) {
            adValTab[i] = ent.adValTab[i];
        }
    }
    return *this;
}
*/

SetInt::SetInt(int size) {
    adValTab = new int [NBMAX = size];
    nElement = 0;
}

SetInt::~SetInt() {
    delete adValTab;
}

SetInt & SetInt::operator<(int nb) {
    if (!(*this)[nb] && (nElement < NBMAX)) {
        adValTab[nElement++] = nb;
    }
    return (*this);
}

int SetInt::operator[](int nb) {
    int i = 0;
    while (i < nElement && adValTab[i] != nb) {
        i++;
    }
    return (i < nElement);
}
