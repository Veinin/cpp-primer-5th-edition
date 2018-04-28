#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::vector; using std::string;

int main()
{
    vector<char> svec = {'h', 'e', 'l', 'l', 'o'};
    string s(svec.cbegin(), svec.cend());
    cout << s << endl;

    return 0;
}