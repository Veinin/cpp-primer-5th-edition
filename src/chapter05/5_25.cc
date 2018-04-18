#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <stdexcept>
using std::runtime_error;

int main()
{
    int i, j;
    while (true) {
        cin >> i >> j;

        try {
            if (j == 0)
                throw runtime_error("divisor is zero");
            cout << i / j << endl;
        } catch(runtime_error& error) {
            cout << error.what() << endl;
            cout << "Try again ? Enter y or n:" << endl;

            char c;
            cin >> c;
            if (c != 'y')
                break;
        };
    }

    return 0;
}