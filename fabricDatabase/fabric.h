#ifndef COLLECTIVE_H
#define COLLECTIVE_H

#include <iostream>
#include <vector>

#include "group.h"

using namespace std;

class Fabric
{
private:
    vector<Group> _groups;
    const string MenuErrorMsg= " - введен не корректный элемент меню";
    const string _menu[4] = { " Записать в базу данных фабрики данные ( количество групп, [количество групп] раз (название группы, количество рабочих,  [количество рабочих] раз (имя, фамилию, год)))",
                              " Удалить рабочего (фамилия, имя, год)",
                              " Удалить всю базу данных",
                              " Завершить"
                            };

public:
    Fabric();
    ~Fabric();

    void exec();
    int menu();
};

#endif // COLLECTIVE_H
