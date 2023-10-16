#ifndef WORKER_H
#define WORKER_H

#include<string>

class Worker
{
    std::string firstName;
    std::string lastName;
    int birthYear;

public:
    Worker();
    void getFirstName();
    void getLastName();
    void getBirthYear();
};

#endif // WORKER_H
