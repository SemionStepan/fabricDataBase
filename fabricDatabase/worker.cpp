#include "worker.h"

Worker::Worker()
{
    _birthYear = 0;
}

Worker::Worker(string firstName, string lastName, int birthYear)
{
    _firstName = firstName;
    _lastName = lastName;
    _birthYear = birthYear;
}

void Worker::save(DataBase database)
{
    database.save(FirstName + _firstName);
    database.save(LastName + _lastName);
    database.save(BirthYear + to_string(_birthYear));
}
