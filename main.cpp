#include <cmath>
#include <iostream>

using namespace std;

class Cone
{
private:
    double radius;
    double height;

public:

    Cone()
    {
        cout << "Default constructor called" << endl; // visivaem po umol4aniu
        radius = 0.0;
        height = 0.0;
    }

    Cone(double r, double h)
    {
        cout << "Parameterized constructor called" << endl;
        radius = r;
        height = h;
    }

    Cone(const Cone& other) // copiruet
    {
        cout << "Copy constructor called" << endl;
        radius = other.radius;
        height = other.height;
    }

    ~Cone() //destructor class
    {
        cout << "Destructor called" << endl;
    }


    double calculateTvirniConusa()
    {
        return sqrt(pow(radius, 2) + pow(height, 2));
    }

    double getRadius() const { return radius; }
    double getHeight() const { return height; }

    void setRadius(double r) { radius = r; }
    void setHeight(double h) { height = h; }
};

int main()
{

    Cone cone1;

    Cone cone2(7.0, 4.0);

    Cone cone3 = cone2;

    cout << "Area of trapezoid 3: " << cone3.calculateTvirniConusa() << endl;

    return 0;
}
