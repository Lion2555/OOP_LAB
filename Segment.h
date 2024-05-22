#pragma once

#include <iostream>
using namespace std;

class Segment
{
private:
    double length;

public:
    Segment(double l = 0) : length(l) {}
    ~Segment() {}

    double& operator[](int index);
    double operator()() const;
    friend ostream& operator<<(ostream& out, const Segment& s);
    friend istream& operator>>(istream& in, Segment& s);

    void increaseLength(double amount);
};
