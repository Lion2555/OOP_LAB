#include "Vector.h"
#include "Error.h"
#include <iostream>

template <typename T>
Vector<T>::Vector(int s)
{
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new T[s];
    for (int i = 0; i < size; i++)
        beg[i] = T();
}

template <typename T>
Vector<T>::Vector(const Vector<T>& v)
{
    size = v.size;
    beg = new T[size];
    for (int i = 0; i < size; i++)
        beg[i] = v.beg[i];
}

template <typename T>
Vector<T>::~Vector()
{
    if (beg != nullptr) delete[] beg;
}

template <typename T>
Vector<T>::Vector(int s, T* mas)
{
    if (s > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");
    size = s;
    beg = new T[size];
    for (int i = 0; i < size; i++)
        beg[i] = mas[i];
}

template <typename T>
T& Vector<T>::operator[](int i)
{
    if (i < 0) throw error("index <0");
    if (i >= size) throw error("index > size");
    return beg[i];
}

template <typename T>
int Vector<T>::operator()() const
{
    return size;
}

template <typename T>
Vector<T>& Vector<T>::operator++()
{
    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");

    T* new_beg = new T[size + 1];
    for (int i = 0; i < size; ++i)
    {
        new_beg[i] = beg[i];
    }
    new_beg[size] = T();
    ++size;

    delete[] beg;
    beg = new_beg;

    return *this;
}

template <typename T>
Vector<T> Vector<T>::operator++(int)
{
    Vector<T> temp(*this);

    if (size + 1 > MAX_SIZE) throw error("Vector length more than MAXSIZE\n");

    T* new_beg = new T[size + 1];
    for (int i = 0; i < size; ++i)
    {
        new_beg[i] = beg[i];
    }
    new_beg[size] = T();
    ++size;

    delete[] beg;
    beg = new_beg;

    return temp;
}

template class Vector<int>;
template class Vector<double>;
