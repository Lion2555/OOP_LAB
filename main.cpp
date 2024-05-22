#include "Segment.h"
#include <iostream>

using namespace std;

int main()
{
    Segment segment1;
    cin >> segment1;
    cout << segment1;
    cout << segment1() << endl;

    segment1[0] = 15.0;
    cout << segment1[0] << endl;
    cout << segment1;
    cout << "Attempting to access index 1 (out of range): " << segment1[1] << endl;

    segment1.increaseLength(5.0);
    cout << "Length after increase: " << segment1() << endl;
    cout << segment1;

    return 0;
}
