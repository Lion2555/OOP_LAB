#ifndef CONE_H
#define CONE_H

#include <iostream>
#include <cmath>

class Cone
{
private:
    double radius;
    double height;

public:
    Cone();
    Cone(double r, double h);
    Cone(const Cone& other);
    ~Cone();

    double calculateTvirniConusa() const;
    double getRadius() const;
    double getHeight() const;

    void setRadius(double r);
    void setHeight(double h);
};

#endif // CONE_H
