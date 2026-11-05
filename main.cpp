#include <iostream>
#include <stdexcept>

using namespace std;

void calcSum(int a, int b) {
    cout << "Lukujen Summa on yhteensa" << a + b << endl;
}

void calcDiv(int a, int b) {

    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        float osamaara = (float)a / b;
        cout << "Lukujen Osamaara on yhteensa" << osamaara << endl;
    }
}

int retSum(int a, int b) {

    return a + b;
}

float retDiv(int a, int b) {

    if (b == 0) {
        throw std::runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a;
    int b;

         cout << "Kerro jokin luku: ";
         cin >> a;

         cout << "Kerroppa hienosti viela toinen luku: ";
         cin >> b;

         calcSum(a, b);
         calcDiv(a, b);

         cout << "retSum tulos: " << retSum(a, b) << endl;

    try {
        float result = retDiv(a, b);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
