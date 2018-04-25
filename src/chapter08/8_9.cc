#include <iostream>
#include <sstream>

using std::cout; using std::endl;
using std::string;
using std::istringstream;

istringstream &print(istringstream &is)
{
    string buf;
    while (is >> buf)
        cout << buf << endl;
    return is;
}

int main(void)
{
    istringstream iss("hello world");
    print(iss);
    return 0;
}