#ifndef rectangle_h
#define rectangle_h

class Rectangle

{
private:
    double width;
    double height;


public:
    double getArea();
    double getCircum();
    void setWidth(double w);
    void setHeight(double h);
};
#endif
