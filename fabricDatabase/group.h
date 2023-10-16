#ifndef GROUP_H
#define GROUP_H

#include "worker.h"
#include <string>
using namespace std;

class Group
{
    string Name;
    Worker *arr[];
public:
    Group();

    void getName();
    void getNumber();
};

#endif // GROUP_H
