#include "Vector.h"
#include "Error.h"
#include <iostream>

using namespace std;

int main()
{
    try
    {
        Vector<int> x(2);
        cout << x() << endl;
        ++x;
        cout << x() << endl;
        x++;
        cout << x() << endl;
        cout << x[1] << endl;
    }
    catch (const error& e)
    {
        e.what();
    }
    return 0;
}
