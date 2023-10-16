#ifndef COLLECTIVE_H
#define COLLECTIVE_H

#include <iostream>
#include "group.h"

using namespace std;

class Collective
{
    Group *arr[];
public:
    Collective();
    ~Collective();

    void getNumber();
};

#endif // COLLECTIVE_H
