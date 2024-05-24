#include "Vector.h"
#include "Error.h"
#include <iostream>
using namespace std;

Vector::Vector(int s)
{
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new int[s];
    for (int i = 0; i < size; i++)
        beg[i] = i + 1;
}

Vector::Vector(const Vector& v)
{
    size = v.size;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}

Vector::~Vector()
{
    if (beg != 0) delete[] beg;
}

Vector::Vector(int s, int* mas)
{
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new int[size];
    for (int i = 0; i < size; i++)
        beg[i] = mas[i];
}

int Vector::operator[](int i)
{
    if (i < 0) throw error("index <0");
    if (i >= size) throw error("index>size");
    return beg[i];
}

int Vector::operator()()
{
    return size;
}

Vector& Vector::operator++() {
    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAX_SIZE\n");

    int* new_beg = new int[size + 1];
    new_beg[0] = 0;
    for (int i = 0; i < size; ++i) {
        new_beg[i + 1] = beg[i];
    }
    ++size;

    delete[] beg;
    beg = new_beg;

    return *this;
}

Vector Vector::operator++(int) {
    Vector temp(*this);

    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAX_SIZE\n");

    int* new_beg = new int[size + 1];
    for (int i = 0; i < size; ++i) {
        new_beg[i] = beg[i];
    }
    new_beg[size] = size + 1;
    ++size;

    delete[] beg;
    beg = new_beg;

    return temp;
}
