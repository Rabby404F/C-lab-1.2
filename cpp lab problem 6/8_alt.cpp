#include <iostream>
using namespace std;

// Namespace Declaration
namespace Greeting {
    void sayHello() {
        cout << "Hello! Welcome to Namespace Example." << endl;
    }
}

// Using directive outside main()
using namespace Greeting;

int main() {
    // Directly calling sayHello() because of using directive outside main()
    sayHello();

    // Using directive inside main()
    {
        using namespace Greeting;
        sayHello(); // Still works because of using inside this scope
    }

    // Without using directive, need to use scope resolution operator
    Greeting::sayHello();

    return 0;
}