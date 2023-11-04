#ifndef GROUP_H
#define GROUP_H

#include "worker.h"
#include <vector>
#include <string>

using namespace std;

class Group : public vector<Worker>
{
private:
    string _name;

public:
    Group(string &name);

    inline const string& getName() { return _name; }
    inline void setName(string newName) { _name = newName; }
    bool save(const DataBase &database);
};

#endif // GROUP_H
