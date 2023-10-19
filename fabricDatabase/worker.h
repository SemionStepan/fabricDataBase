#ifndef WORKER_H
#define WORKER_H

#include<string>

using namespace std;

class Worker
{
    string _firstName;
    string _lastName;
    int _birthYear;

public:
    Worker();
    Worker(string firstName, string lastName, int birthYear);


    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setBirthYear(int birthYear);
    void getFirstName();
    void getLastName();
    void getBirthYear();
};

#endif // WORKER_H
