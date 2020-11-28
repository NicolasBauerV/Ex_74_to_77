//
//  demo.cpp
//  Exercice Part 4
//
//  Created by Nicolas BAUER on 20/11/2020.
//

#include <iostream>
#include "demo.hpp"

using namespace::std;

CDemo::CDemo(const CDemo& d)
{
    cout << "constructeur II (recopie) : " << d.x << " " << d.y << "\n";
    x = d.x;
    y = d.y;
}

CDemo::~CDemo()
{
    cout << "destruction : " << x << " " << y << "\n";
}
