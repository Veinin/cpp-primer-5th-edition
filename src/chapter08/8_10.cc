#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    ifstream ifs("data/sstream");
    if (!ifs)
    {
        cerr << "No data!" << endl;
        return -1;
    }

    vector<string> words;
    string line, word;
    while (getline(ifs, line)) {
        stringstream ss(line);
        while (ss >> word)
            words.push_back(word);
    }

    for (const auto &w : words)
        cout << w << endl;

    return 0;
}