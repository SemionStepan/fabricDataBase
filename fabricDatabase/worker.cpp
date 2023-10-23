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
