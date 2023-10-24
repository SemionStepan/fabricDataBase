#ifndef WORKER_H
#define WORKER_H

#include "database.h"
#include<string>

using namespace std;

class Worker
{
private:
    string _firstName;
    string _lastName;
    int _birthYear;

public:
    Worker();
    Worker(string firstName, string lastName, int birthYear);

    void save(DataBase database);
    void fillWorker();
};

#endif // WORKER_H
