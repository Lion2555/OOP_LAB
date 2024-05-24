#include "Vector.h"
#include "Error.h"
#include <iostream>
using namespace std;

int main()
{
    try
    {
        Vector x(2);
        cout << "Size: " << x() << endl;
        ++x;
        cout << "Size after prefix ++: " << x() << endl;
        cout << "Size after postfix ++: " << x++() << endl;
        cout << endl;
        cout << x[7] << endl;
    }
    catch (error& e)
    {
        e.what();
    }
    return 0;
}
