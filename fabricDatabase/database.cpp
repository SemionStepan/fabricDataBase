#include "database.h"

DataBase::DataBase(string fileName)
{
    _file.open(fileName + _ext, std::fstream::in | std::fstream::out | std::fstream::app);
    if (!_file.is_open())
    {
        cout << "Файл не открыт !!!" << endl;
    }
}
