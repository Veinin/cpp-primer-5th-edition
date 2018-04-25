#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    ifstream ifs("data/sstream");
    if (!ifs)
    {
        cerr << "No data!" << endl;
        return -1;
    }

    vector<PersonInfo> persons;
    string line, word;
    istringstream iss;

    while (getline(ifs, line)) {
        PersonInfo info;

        iss.clear();
        iss.str(line);

        iss >> info.name;

        while (iss >> word)
            info.phones.push_back(word);

        persons.push_back(info);
    }

    return 0;
}