#ifndef GROUP_H
#define GROUP_H

#include "worker.h"
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Group
{
private:
    string Name;
    fstream _file;
    vector<Worker> workers;

public:
    Group();

    void getName();
    void getNumber();
};

#endif // GROUP_H
