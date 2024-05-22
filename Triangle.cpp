#include "Triangle.h"

void Triangle::setSides(double _a, double _b, double _c) {
    a = _a;
    b = _b;
    c = _c;
}

double Triangle::getSideA() const {
    return a;
}

double Triangle::getSideB() const {
    return b;
}

double Triangle::getSideC() const {
    return c;
}

double Triangle::calculatePerimeter() const {
    return a + b + c;
}

double Triangle::calculateAngleA() const {
    return acos((b * b + c * c - a * a) / (2 * b * c)) * (180.0 / M_PI);
}

double Triangle::calculateAngleB() const {
    return acos((a * a + c * c - b * b) / (2 * a * c)) * (180.0 / M_PI);
}

double Triangle::calculateAngleC() const {
    return acos((a * a + b * b - c * c) / (2 * a * b)) * (180.0 / M_PI);
}
