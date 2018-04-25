#include <iostream>
using std::cout; using std::endl;

#include <fstream>
using std::ifstream;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> lines;

    ifstream ifs("./data/item.txt");
    if (ifs) {
        string buff;
        while (ifs >> buff)
            lines.push_back(buff);
    }

    for (const auto &line : lines)
        cout << line << endl;
}

