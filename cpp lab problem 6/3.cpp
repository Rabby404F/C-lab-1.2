#include <iostream>
using namespace std;

// Function template with default type parameter = double
template <typename T = double>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Example 1: Using int
    cout << "Sum (int): " << add<int>(3, 4) << endl;

    // Example 2: Using float
    cout << "Sum (float): " << add<float>(3.5f, 2.2f) << endl;

    // Example 3: No type specified (default = double)
    cout << "Sum (default double): " << add(3.7, 4.2) << endl;

    return 0;
}