#include <iostream>

using namespace std;

/*
 * WHEN TO USE 'inline':
 *
 * Use inline instead of #define
 *
 * Very small functions are good candidates for inline:
 * faster code and smaller executables (more chances to stay in the code cache)
 *
 * The function is small and called very often
 */

inline int add(const int a, const int b) {
    return a + b;
}

int main() {
    cout << add(1, 3);

    return 0;
}