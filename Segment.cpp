#include "Segment.h"
#include <iostream>

using namespace std;

double& Segment::operator[](int index)
{
    if (index != 0)
    {
        cout << "Index is out of range\n";
        return length;
    }
    return length;
}

double Segment::operator()() const
{
    return length;
}

ostream& operator<<(ostream& out, const Segment& s)
{
    out << "Segment length = " << s.length << endl;
    return out;
}

istream& operator>>(istream& in, Segment& s)
{
    in >> s.length;
    return in;
}

void Segment::increaseLength(double amount)
{
    if (amount > 0)
    {
        length += amount;
    }
}
