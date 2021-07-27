#include <iostream>
#include <vector>

using namespace std;

void foo(int &x) {
    x = 100;
}

void printVector(const vector<string> &v) {
    for (const string &s : v) {
        cout << s << " ";
    }
    cout << '\n';
}

int main() {
    vector<string> x{"Larry", "Moe", "Curly"};
    printVector(x);

    int i{0};
    foo(i);
    cout << i;

    return 0;
}