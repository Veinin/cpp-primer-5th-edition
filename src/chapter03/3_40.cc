#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <cstring>

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";

    const unsigned sz = 16 + 18 + 2;
    char ca3[sz];
    strcpy(ca3, ca1);
    strcat(ca3, " ");
    strcat_s(ca3, ca2);
    cout << ca3 << endl;

    return 0;
}