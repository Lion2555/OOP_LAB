#include "Cone.h"

Cone::Cone()
{
    std::cout << "Default constructor called" << std::endl;
    radius = 0.0;
    height = 0.0;
}

Cone::Cone(double r, double h)
{
    std::cout << "Parameterized constructor called" << std::endl;
    radius = r;
    height = h;
}

Cone::Cone(const Cone& other)
{
    std::cout << "Copy constructor called" << std::endl;
    radius = other.radius;
    height = other.height;
}

Cone::~Cone()
{
    std::cout << "Destructor called" << std::endl;
}

double Cone::calculateTvirniConusa() const
{
    return sqrt(pow(radius, 2) + pow(height, 2));
}

double Cone::getRadius() const { return radius; }

double Cone::getHeight() const { return height; }

void Cone::setRadius(double r) { radius = r; }

void Cone::setHeight(double h) { height = h; }
