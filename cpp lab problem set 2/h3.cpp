#include<iostream>
using namespace std;

class Sum {
public:
    int a, b;

    void get() {
        cin >> a >> b;
    }

    // Helper function to calculate digit sum of a single number
    int digitSum(int n) {
        int total = 0;
        for (; n > 0; n /= 10) {
            total += n % 10;
        }
        return total;
    }

    void digit_summation() {
        int total_sum = 0;

        for (int i = a; i <= b; i++) {
            total_sum += digitSum(i);
        }

        cout << total_sum << endl;
    }
};

int main() {
    Sum obj;
    obj.get();
    obj.digit_summation();
    return 0;
}
