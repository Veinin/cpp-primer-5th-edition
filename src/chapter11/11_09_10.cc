#include <iostream>
#include <map>
#include <list>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::string;
using std::map; using std::list; using std::vector;

int main()
{
    map<string, list<size_t>> word_lines;
    word_lines["Hello"].push_back(1);
    word_lines["Hello"].push_back(10);
    word_lines["Hello"].push_back(20);


    map<vector<int>::iterator, int> vm;
    map<list<int>::iterator, int> lm;

    return 0;
}