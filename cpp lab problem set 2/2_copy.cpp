#include<iostream>
using namespace std;

class TwinPrimeFinder {
public:
    int n;

    void input() {
        cin >> n;
    }

    bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i < num; i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    void findTwinPrime() {
        for (int i = n; i > 2; i--) {
            if (isPrime(i) && isPrime(i - 2)) {
                cout << i << " " << i - 2 << endl;
                break;
            }
        }
    }
};

int main() {
    TwinPrimeFinder obj;
    obj.input();
    obj.findTwinPrime();
    return 0;
}
