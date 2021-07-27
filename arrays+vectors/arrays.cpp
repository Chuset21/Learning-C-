#include <iostream>

using std::cout;
using std::cin;

int main() {
    int h[10]{3, 5};

    const short xSize{356};
    int x[xSize]{0}; // init all to 0

    const int y[]{1, 2, 3, 4, 5}; // size automatically calculated

    int z[3][4];

    return 0;
}