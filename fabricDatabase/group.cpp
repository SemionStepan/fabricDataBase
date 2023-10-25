#include "group.h"

Group::Group(string name)
{
    _Name = name;
}

bool Group::save(DataBase &database)
{
    for(auto worker : _workers)
    {
        worker.save(database);
    }
}
