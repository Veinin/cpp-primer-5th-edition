#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string &str)
{
    return isdigit(str[0]);
}

string format(const string &str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int main()
{
    ifstream ifs("data/sstream");
    if (!ifs)
    {
        cerr << "No data!" << endl;
        return -1;
    }

    vector<PersonInfo> people;
    string line, word;
    istringstream iss;

    while (getline(ifs, line)) {
        PersonInfo info;

        iss.clear();
        iss.str(line);

        iss >> info.name;

        while (iss >> word)
            info.phones.push_back(word);

        people.push_back(info);
    }

    for (const auto &entry : people) {
        ostringstream formatted, badNums;
        for (const auto &phone : entry.phones) {
            if (valid(phone)) {
                formatted << " " << format(phone);
            } else {
                badNums << " " << phone;
            }
        }

        if (badNums.str().empty())
            cout << entry.name << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name
                 << " invalid numbers " << badNums.str() << endl;
    }

    return 0;
}