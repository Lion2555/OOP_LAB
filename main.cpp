#include "Logger.h"
#include <iostream>

using namespace std;

int Segment::instanceCount = 0;

int main() {
    Logger logger;

    Segment segment1(10.0, "segment1");
    logger.addRecord(segment1);
    Segment segment2(15.0, "segment2");
    logger.addRecord(segment2);

    cout << "Number of Segment instances: " << Segment::getInstanceCount() << endl;
    logger.saveLog();
}
