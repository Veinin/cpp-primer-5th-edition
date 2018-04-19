#include <iostream>
using std::cout; using std::endl;
using std::string;

bool contain_capital(const string& str)
{
    for (auto &c : str)
        if (isupper(c))
            return true;

    return false;
}

void to_lowercase(string &str)
{
    for (auto &c : str)
        c = tolower(c);
}

int main()
{
    string str("Hello World!");
    cout << contain_capital(str) << endl;

    to_lowercase(str);
    cout << str << endl;

    return 0;
}