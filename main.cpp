#include "Equilateral.h"
#include <iostream>

using namespace std;

int main() {
    Triangle t1(3, 4, 5);
    cout << "Triangle sides: " << t1.getSideA() << ", " << t1.getSideB() << ", " << t1.getSideC() << endl;
    cout << "Perimeter: " << t1.calculatePerimeter() << endl;
    cout << "Angles: A=" << t1.calculateAngleA() << " B=" << t1.calculateAngleB() << " C=" << t1.calculateAngleC() << endl;

    Equilateral eq(5);
    cout << "Equilateral triangle side: " << eq.getSideA() << endl;
    cout << "Perimeter: " << eq.calculatePerimeter() << endl;
    cout << "Area: " << eq.getArea() << endl;

    return 0;
}
