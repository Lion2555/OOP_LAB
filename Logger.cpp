#include "Logger.h"
#include <ctime>
#include <fstream>
#include <iostream>

using namespace std;

void Logger::addRecord(Segment& segment)
{
    string record = "Object name: " + segment.objectName + "\nLength: " + to_string(segment.length);
    log += record + "\n";
}

void Logger::saveLog()
{
    std::ofstream file("log.txt");
    if (file.is_open())
    {
        time_t now = time(0);
        tm timeInfo;
        localtime_s(&timeInfo, &now);
        char dateTime[80];
        strftime(dateTime, 80, "%Y.%m.%d %H:%M:%S", &timeInfo);

        file << "ClassName: Segment\n";
        file << "time: " << dateTime << endl;
        file << log;
        file.close();
    }
    else
        cout << "Unable to open log file!" << endl;
}
