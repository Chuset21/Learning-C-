#include <iostream>

using namespace std;

int main() {
    string string1;
    const string string2{"Frank"};
    const string string3{"Frank", 3};       // Fra
    const string string4{string3, 0, 2};  // Fr
    const string string5(3, 'F');           // FFF

    string1 = string2 + " " + string5;

//    string1 = "Frank" + "FFF";  // Illegal (C-style strings)

    string1[0] = 'P';
    string1.at(0) = 'C';

    for (const char c : string1) {
        cout << c << '\n';
    }

    /*
     * Can compare:
     * Two C++ strings
     * A C-style string variable and a C++ string
     * A C-style string literal and a C++ string
     */

    // First parameter is the starting index (inclusive) and second parameter is the length of the substring
    cout << string1.substr(0, 4) << '\n'; // "Cran"
    cout << string1.substr(5, 2) << '\n'; // " F"
    cout << string1.substr(5, 4) << '\n'; // " FFF"

    // Returns the index of the substring, returns string::npos if the substring wasn't found
    cout << string1.find('F') << '\n';           // 6
    cout << string1.find('F', 7) << '\n';        // 7
    cout << string1.find("ran") << '\n';         // 1
    cout << (string::npos == string1.find("XX")) << '\n';// true

    // First parameter is the starting index (inclusive) and second parameter is the length of the substring
    // Modifies the original string
    cout << string1.erase(0, 3) << '\n'; // "nk FFF"
    cout << string1.erase(0, 3) << '\n'; // "FF"
//    string1.clear() // Clears string, removes all chars

    cout << string1.length();

    return 0;
}