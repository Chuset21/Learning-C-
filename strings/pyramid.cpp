#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Input a string: ";
    getline(cin, input);

    for (size_t i = input.length(), subStringEnd{0}, numWhitespace = input.length() - 1;
         i > 0;
         i--, numWhitespace--, subStringEnd++) {
        const string str = input.substr(0, subStringEnd);

        cout << string(numWhitespace, ' ') << str + input.at(subStringEnd) << string(str.begin(), str.end()) << '\n';
    }

    return 0;
}