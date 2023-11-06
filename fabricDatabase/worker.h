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
    bool _workerFilled;
    const string FirstName = "Имя :";
    const string LastName = "Фамилия :";
    const string BirthYear = "Год рождения :";
    string ask(string msg);
    const string AskFirstName = "Введите имя : ";
    const string AskLastName = "Введите фамилию : ";
    const string AskBirthYear = "Введите год рождения : ";

public:
    Worker();
    Worker(string firstName, string lastName, int birthYear);

    void save(DataBase database);
    void fillWorker();
};

#endif // WORKER_H
