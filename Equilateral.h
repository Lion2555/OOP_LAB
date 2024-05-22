#pragma once
#include "Triangle.h"

class Equilateral : public Triangle {
private:
    double area;

public:
    Equilateral(double side = 1.0) : Triangle(side, side, side), area(calculateArea()) {}

    double calculateArea();
    double getArea() const;
};
