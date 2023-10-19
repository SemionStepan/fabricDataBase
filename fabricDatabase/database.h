#ifndef DATABASE_H
#define DATABASE_H

#include <fstream>

using namespace std;

class DataBase
{
private:
    fstream _file;

public:
    DataBase(string fileName);

    void save(string message);
    void show();
    void kill(string message);
    void selfDestruct();
};

#endif // DATABASE_H
