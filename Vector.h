#include <iostream>
using namespace std;
const int MAX_SIZE = 20;

class Vector
{
    int size;
    int* beg;
public:
    Vector()
    {
        size = 0;
        beg = 0;
    }
    Vector(int s);
    Vector(int s, int* mas);
    Vector(const Vector& v);
    ~Vector();
    int operator[](int i);
    int operator()();
    Vector& operator++();
    Vector operator++(int);
};
