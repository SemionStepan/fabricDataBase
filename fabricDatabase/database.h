#ifndef DATABASE_H
#define DATABASE_H

#include <fstream>
#include <iostream>

using namespace std;

class DataBase
{
private:
    const string _ext = ".database";
    fstream _file;

public:
    DataBase(string fileName);

    void save(string message);
    void show();
    void kill(string message);
    void selfDestruct();
};

#endif // DATABASE_H
