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

void Worker::setFirstName(string firstName)
{
    _firstName = firstName;
}

void Worker::setLastName(string lastName)
{
    _lastName = lastName;
}

void Worker::setBirthYear(int birthYear)
{
    _birthYear = birthYear;
}
