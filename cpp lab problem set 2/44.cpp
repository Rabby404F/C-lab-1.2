#include<iostream>
using namespace std;

class Sorter {
   public: 
    int arr[7];  

public:
    void get_Element() {
        
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
    }
    void printArray() {
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void sortDescending() {
        for (int i = 0; i < 7; i++) {
            for (int j = i + 1; j < 7; j++) {
                if (arr[j] > arr[i]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }

    
};

int main() {
    Sorter obj;
    obj.get_Element();
    obj.sortDescending();
    obj.printArray();

    return 0;
}
