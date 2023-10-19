#ifndef COLLECTIVE_H
#define COLLECTIVE_H

#include <iostream>
#include <vector>

#include "group.h"

using namespace std;

class Fabric
{
public:
    vector<Group> groups;

public:
    Fabric();
    ~Fabric();

    void exec();
};

#endif // COLLECTIVE_H
