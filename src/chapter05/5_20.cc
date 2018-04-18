#include <iostream>
using std::endl; using std::cin; using std::cout;

#include <string>
using std::string;

int main()
{
    string str, temp;

    while(cin >> str)
        if (str == temp)
            break;
        else
            temp = str;

    if (cin.eof())
        cout << "no word was repeated." << endl;
    else
        cout << str << " occurs twice in succession." << endl;

    return 0;
}