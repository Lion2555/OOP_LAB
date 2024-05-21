#pragma once
#include "Segment.h"
#include <string>
using namespace std;

class Logger
{
public:
    string log;

public:
    void addRecord(Segment& segment);
    void saveLog();
};
