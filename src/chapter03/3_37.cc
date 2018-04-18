#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};    // afterwards as no \0 appended
    const char *cp = ca;

    while(*cp) {
        cout << *cp << endl;
        ++cp;
    }

    return 0;
}