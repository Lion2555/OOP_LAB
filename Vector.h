#include <iostream>
using namespace std;

const int MAX_SIZE = 20;

template <typename T>
class Vector
{
    int size;
    T* beg;
public:
    Vector()
    {
        size = 0;
        beg = nullptr;
    }
    Vector(int s);
    Vector(int s, T* mas);
    Vector(const Vector<T>& v);
    ~Vector();
    T& operator[](int i);
    int operator()() const;
    Vector<T>& operator++();
    Vector<T> operator++(int);
};
