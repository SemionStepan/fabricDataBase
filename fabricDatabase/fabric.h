#ifndef COLLECTIVE_H
#define COLLECTIVE_H

#include <iostream>
#include <vector>
#include <stdlib.h>

#include "database.h"
#include "group.h"

using namespace std;

class Fabric
{
private:
    DataBase _dataBase;
    vector<Group> _groups;
    const string MenuGroupNumberMsg = "Введите количество групп : ";
    const string MenuGroupNameMsg = "Введите название группы : ";
    const string MenuWorkersNumberMsg = "Введите количество рабочих в группе :";
    const string MenuErrorMsg= " - введен не корректный элемент меню";
    const string _menu[4] = { " Записать в базу данных фабрики данные ( количество групп, [количество групп] раз (название группы, количество рабочих,  [количество рабочих] раз (имя, фамилию, год)))",
                              " Удалить рабочего (фамилия, имя, год)",
                              " Удалить всю базу данных",
                              " Завершить"
                            };
    void addDataBase();
    int menu();
    string ask(string msg);

public:
    Fabric(string fileName);
    ~Fabric();

    void exec();
};

#endif // COLLECTIVE_H
