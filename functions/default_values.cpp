#include <iostream>

using namespace std;

// Default arguments must be at the tail
double calcCost(const double baseCost, const double taxRate = 0.06) {
    return baseCost + baseCost * taxRate;
}

// Should make these references
void greeting(const string name, const string prefix = "Mr", const string suffix = "") {
    cout << "Hello " << prefix << " " << name << " " << suffix << '\n';
}

int main() {
    const double cost {calcCost(200)};

    greeting("Glenn", "Dr", "M.DF");
    greeting("Glenn", "Professor");
    greeting("William");

    return 0;
}