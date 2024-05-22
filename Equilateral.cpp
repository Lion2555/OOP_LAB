#include "Equilateral.h"

double Equilateral::calculateArea() {
    return (sqrt(3) / 4) * a * a;
}

double Equilateral::getArea() const {
    return area;
}
