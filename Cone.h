#pragma once
#include "Solid.h"

class Cone : public Solid
{
    float radius, height;
    const float PI = 3.1416;
public:
    Cone(float r, float h) : radius(r), height(h) {}
    void volume() override;
};
