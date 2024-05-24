#include "Cone.h"
#include "Cube.h"

int main()
{
    Cone cone(5, 10);
    Cube cube(4);

    cone.volume();
    cube.volume();

    return 0;
}
