#include <iostream>

using std::cin;
using std::cout; using std::endl;

int main()
{
    cout << "Enter tow numbers:" << endl;

    int v1, v2;
    cin >> v1 >> v2;

    cout << "The sum of " << v1 << " and " << v2
         << " is " << v1 + v2 << endl;

    return 0;
}