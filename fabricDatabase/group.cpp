#include "group.h"

Group::Group(string name)
{
    _Name = name;
    vector<Worker> _workers;
}

bool Group::save(DataBase &database)
{
    for(auto worker : _workers)
    {
        worker.save(database);
    }
}
