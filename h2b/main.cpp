#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Volvo", "S40", 2011));
    carList.push_back(Car("Volvo", "S80", 2013));
    carList.push_back(Car("Volvo", "S90", 2018));

    cout << "Toinen auto:" << endl;
    carList[1].printData();

    cout << endl;
    cout << "Kaikki autot:" << endl;
    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
        cout << endl;
    }

    return 0;
}
