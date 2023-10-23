#ifndef WORKER_H
#define WORKER_H

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

};

#endif // WORKER_H
