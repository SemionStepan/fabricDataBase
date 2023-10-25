#ifndef GROUP_H
#define GROUP_H

#include "worker.h"
#include <vector>
#include <string>

using namespace std;

class Group
{
private:
    string _Name;
    vector<Worker> _workers;

public:
    Group(string name);

    inline string getName() { return _Name;}
    bool save();
};

#endif // GROUP_H
