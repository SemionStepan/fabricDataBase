#include "fabric.h"

Fabric::Fabric()
{}

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

void Fabric::exec()
{
    bool doExec = true;
    do
    {
        switch(menu())
        {
        case 1:

        break;
        case 2:

        break;
        case 3:

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
