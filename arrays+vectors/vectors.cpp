#include <vector>   // Very similar to ArrayList in Java, dynamic array

using std::vector;

int main() {
    vector<int> testScores(10); // Will be initialised to 0

//    const vector<char> vowels{'a', 'e', 'i', 'o', 'u'};   // Empty
    const vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    vector<double> temps(40, 20.0); // Will initialise 40 elements of value 20.0

    temps[0]; // no bounds check
    temps.at(39) = 21.5; // bounds check
    temps.push_back(11.3); // Append
    temps.size(); // Returns size

    vector<vector<int>> matrix{
            {1, 2, 3},
            {3, 4, 5}
    };

    return 0;
}