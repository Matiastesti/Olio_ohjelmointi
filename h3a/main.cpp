#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main()
{

    {
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
    }

    {
        ItalianChef ic("Anthony Bourdain");
        ic.makeSalad();
        ic.makeSoup();
        ic.makePasta();
        cout << "name of the Italian Chef is " << ic.getName() << endl;
    }

    return 0;
}
