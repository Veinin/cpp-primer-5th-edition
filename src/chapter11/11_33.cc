#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

using std::cout; using std::cin; using std::endl; using std::string;
using std::runtime_error;
using std::ifstream; using std::istringstream; using std::getline;
using std::map;

map<string, string> buildMap(ifstream &map_file)
{
    map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1)
            trans_map[key] = value.substr(1);
        else
            throw runtime_error("no rule for " + key);
    }
    return trans_map;
}

const string &
transform(const string &s, const map<string, string> &trans_map)
{
    auto it = trans_map.find(s);
    if (it != trans_map.end())
        return it->second;
    else
        return s;
}

void word_transform(ifstream &map_file, ifstream &input)
{
    map<string, string> trans_map = buildMap(map_file);
    string line;
    while (getline(input, line)) {
        istringstream stream(line);
        string word;
        bool first_word = true;
        while (stream >> word) {
            if (first_word)
                first_word = false;
            else
                cout << " ";
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    if (argc != 3)
        throw runtime_error("wrong number of arguments");

    ifstream map_file(argv[1]);
    if (!map_file)
        throw runtime_error("no transformation file");

    ifstream input(argv[2]);
    if (!input)
        throw runtime_error("no input file");

    word_transform(map_file, input);

    return 0;
}