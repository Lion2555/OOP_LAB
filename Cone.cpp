#include "Cone.h"
#include <iostream>

using namespace std;

void Cone::volume()
{
    cout << "Cone volume: " << (1.0 / 3.0) * PI * radius * radius * height << endl;
}
