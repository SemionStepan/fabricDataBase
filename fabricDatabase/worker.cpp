#include "worker.h"

string Worker::ask(string msg)
{
    cout << msg << endl;
    string str;
    cin >> str;
    return str;
}

Worker::Worker()
{
    _birthYear = 0;
    _workerFilled = false;
}

Worker::Worker(string firstName, string lastName, int birthYear)
{
    _firstName = firstName;
    _lastName = lastName;
    _birthYear = birthYear;
    _workerFilled = true;
}

void Worker::save(DataBase database)
{
    database.save(FirstName + _firstName);
    database.save(LastName + _lastName);
    database.save(BirthYear + to_string(_birthYear));
}

void Worker::fillWorker()
{
    _firstName = ask(AskFirstName);
    _lastName = ask(AskLastName);
    _birthYear = stoi(ask(AskBirthYear));
    _workerFilled = true;
}
