#ifndef CAR_H
#define CAR_H

#include <string>
#include "engine.h"
#include "wheel.h"

class Car
{
public:
    Car();
    Car(const std::string &model, const std::string &brand);

    void setEngine();
    void setWheels();

    std::string getModel() const;
    void setModel(const std::string &model);

    std::string getBrand() const;
    void setBrand(const std::string &brand);

    void printDetails() const;

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;
};

#endif
