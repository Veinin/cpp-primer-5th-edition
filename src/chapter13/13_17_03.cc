#include <iostream>

using std::cout; using std::endl;

struct numbered {
    numbered() : mysn(++unique) {}
    numbered(const numbered& rhs) : mysn(++unique) { cout << "numbered(const numbered&)" << endl; }

    static int unique;
    int mysn;
};

int numbered::unique = 0;

void f (const numbered &s)
{
    cout << s.mysn << endl;
}

int main()
{
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);

    return 0;
}