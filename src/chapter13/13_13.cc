#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

struct X {
    X() { cout << "X()" << endl; }
    X(const X&) { cout << "X(const X&)" << endl; }
    X& operator=(const X&) { cout << "X& operator=(const X&)" << endl; }
    ~X() { cout << "~X()" << endl; }
};

void f(const X &px, X x)
{
    vector<X> vec;
    vec.reserve(2);

    vec.push_back(px);
    vec.push_back(x);
}

int main()
{
    X *px = new X;
    f(*px, *px);

    X x;
    x = *px;

    delete px;

    return 0;
}