#include <iostream>
#include <string>

using std::cout; using std::endl; using std::string;

string &add_pre_and_suffix(string name, const string &pre, const string &suffix)
{
    name.insert(0, pre);
    name.insert(name.size(), suffix);
    return name;
}

int main()
{
    string s("Veinin");
    cout << add_pre_and_suffix(s, "Mr.", "Jr.") << endl;

    return 0;
}
