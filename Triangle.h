#pragma once
#define _USE_MATH_DEFINES
#include <cmath>


class Triangle {
protected:
    double a, b, c;

public:
    Triangle(double _a = 1.0, double _b = 1.0, double _c = 1.0) : a(_a), b(_b), c(_c) {}

    void setSides(double _a, double _b, double _c);
    double getSideA() const;
    double getSideB() const;
    double getSideC() const;

    double calculatePerimeter() const;
    double calculateAngleA() const;
    double calculateAngleB() const;
    double calculateAngleC() const;
};
