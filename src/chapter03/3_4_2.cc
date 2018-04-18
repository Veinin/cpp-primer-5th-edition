#include <iostream>
#include <string>

using std::string;
using std::getline;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    auto size1 = s1.size();
    auto size2 = s2.size();
    
    if (size1 == size2)
        cout << "The two string have the same length." << endl;
    else
        cout << "The longer string is " << ((size1 > size2) ? size1 : size2) << endl;

    return 0;
}