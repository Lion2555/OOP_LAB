#pragma once
#include "Solid.h"

class Cube : public Solid
{
    float side;
public:
    Cube(float s) : side(s) {}
    void volume() override;
};
