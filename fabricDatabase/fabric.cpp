#include "fabric.h"

void Fabric::addDataBase()
{
    bool doWork = true;
    do
    {
        _dataBase.save(ask(MenuGroupNumberMsg));

        for(int i = 0; i < numberOfGroups; i++)
        {
            Group group(ask(MenuGroupNameMsg));
        }
    }
    while(doWork);
}

Fabric::Fabric(string fileName)
{
    DataBase _dataBase(fileName);
}

int Fabric::menu()
{
    do
    {
        for(int count = 0; count < 4; count++)
        {
            cout << _menu[count] << endl;
        }

        int choice;
        cin >> choice;

        if(choice < 1 || choice > 4)
        {
            cout << "(" << choice << ")" << MenuErrorMsg << endl;
        }
        else
        {
            return choice;
        }
    } while(true);
}

string Fabric::ask(string msg)
{
    cout << msg << endl;
    string str = 0;
    cin >> str;
  return str;
}

void Fabric::exec()
{
    bool doExec = true;
    do
    {
        switch(menu())
        {
        case 1:
            addDataBase();
        break;
        case 2:
            _dataBase.kill(NULL);
        break;
        case 3:
        _dataBase.selfDestruct();
        break;
        case 4:
            doExec = false;
        break;
        default:
            ;
        };
    }
    while(doExec);

}
