//
// Created by Laurentiu-Andrei Postole on 22/04/2020.
//

#ifndef TEMA2_POO_VECTOR_H
#define TEMA2_POO_VECTOR_H

#include <vector>

using namespace std;

class Vector {
private:
    vector<int> vect;
public:
    Vector();
    Vector(int *a);
    ~Vector();
};


#endif //TEMA2_POO_VECTOR_H
