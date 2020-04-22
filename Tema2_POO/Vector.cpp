//
// Created by Laurentiu-Andrei Postole on 22/04/2020.
//

#include "Vector.h"
#include <iostream>

using namespace std;

Vector::Vector() = default;
Vector::Vector(int *a) {
    int nr;
    for(int i = 1;i < *a;i++){
        cin>>nr;
        vect.push_back(nr);
    }
}
Vector::~Vector()= default;