#include <iostream>
#include <string>

using std::string;
using std::getline;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    string line;

    while (getline(cin, line)) {
        if (!line.empty() && line.size() > 5)
            cout << line << endl;
    }

    return 0;
}