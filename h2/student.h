#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;
    int studentNumber;
    double average;

public:
    void setName(string n);
    void setStudentNumber(int s);
    void setAverage(double a);

    string getName();
    int getStudentNumber();
    double getAverage();
};

#endif
