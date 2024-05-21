#pragma once
#include <string>

using namespace std;

class Segment
{
    static int instanceCount;

public:
    string objectName;
    double length;

    Segment(double l, string name) : length(l), objectName(name) { instanceCount++; }
    static int getInstanceCount() { return instanceCount; }
};
