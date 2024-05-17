#include <iostream>
#include "Cone.h"

int main()
{
    Cone cone1;
    Cone cone2(7.0, 4.0);
    Cone cone3 = cone2;

    std::cout << "Area of trapezoid 3: " << cone3.calculateTvirniConusa() << std::endl;

    return 0;
}
