#include <iostream>
using std::cout; using std::endl;

#include <cstring>

int main()
{
    const char ca1[] = "A string example";
    const char ca2[] = "A different string";

    if (strcmp(ca1, ca2))
        cout << ca1 << endl;
    else
        cout << ca2 << endl;

    const char *cp1 = ca1, *cp2 = ca2;
    cout << strcmp(cp1, cp2) << endl;   // 1
    cout << strcmp(cp2, cp1) << endl;   // -1
    cout << strcmp(cp1, cp1) << endl;   // 0

    cout << strlen(cp1) << endl;

    const unsigned sz = 16 + 18 + 2;
    char lageStr[sz];

    strcpy(lageStr, ca1);
    strcat(lageStr, " ");
    strcat(lageStr, ca2);

    cout << lageStr << endl;

    strncpy(lageStr, ca1, sz);
    if (strlen(lageStr) > sz)
        lageStr[sz - 1] = '\0';
    strncat(lageStr, " ", 2);
    strncat(lageStr, ca2, sz - strlen(lageStr));
    cout << lageStr << endl;

    return 0;
}