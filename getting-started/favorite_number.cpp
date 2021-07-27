#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Enter your favorite number between 1 and 100: ";
    int favoriteNumber;
    cin >> favoriteNumber;

    cout << "Amazing!! That's my favorite number too!" << endl;
    cout << "No really!! " << favoriteNumber << " is my favorite number!" << endl;

    return 0;
}
