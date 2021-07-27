#include <iostream>

using std::cout;
using std::cin;

int main() {
    cout << "Hello, welcome to Miguel's Carpet Cleaning Service\n\n"
            "How many small rooms would you like cleaned? ";
    unsigned int smallRooms{0};
    cin >> smallRooms;

    cout << "How many large rooms would you like cleaned? ";
    unsigned int largeRooms{0};
    cin >> largeRooms;

    const unsigned short pricePerSmallRoom{25};
    const unsigned short pricePerLargeRoom{35};

    const unsigned int cost = pricePerSmallRoom * smallRooms + pricePerLargeRoom * largeRooms;
    const double taxCost = cost * 0.06;

    cout << "\nEstimate for carpet cleaning service:\n"
            "Number of small rooms: " << smallRooms <<
         "\nNumber of large rooms: " << largeRooms <<
         "\nPrice per small room: $" << pricePerSmallRoom <<
         "\nPrice per large room: $" << pricePerLargeRoom <<
         "\nCost: $" << cost <<
         "\nTax: $" << taxCost <<
         "\n\nTotal Estimate: $" << cost + taxCost <<
         "\nThis estimate is valid for 30 days.\n";

    return 0;
}