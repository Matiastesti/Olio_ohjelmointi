#include <iostream>
#include <memory>
#include "Car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    cout << "Car" << endl;
    Car car;
    car.setBrand("Volvo");
    car.setModel("S40");
    car.setYearModel(2011);
    car.printData();

    cout << endl;
    cout << "Rectangle" << endl;
    Rectangle* rect = new Rectangle();
    rect->setWidth(45.0);
    rect->setHeight(90.4);
    cout << "Pinta-ala: " << rect->getArea() << endl;
    cout << "Ympärysmitta: " << rect->getCircum() << endl;
    delete rect;

    cout << endl;
    cout << "Student" << endl;
    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Jokuhullu");
    student->setStudentNumber(423473);
    student->setAverage(3.3);
    cout << "Nimi: " << student->getName() << endl;
    cout << "Opiskelijanumero: " << student->getStudentNumber() << endl;
    cout << "Keskiarvo: " << student->getAverage() << endl;

    return 0;
}
